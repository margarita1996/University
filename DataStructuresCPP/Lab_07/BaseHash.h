//
// Created by lieroz on 12.12.16.
//

#ifndef LAB_07_BASEHASH_H
#define LAB_07_BASEHASH_H

#include <vector>
#include <cstddef>

template <class K>
struct HashFunc {
	size_t operator()(const K& key, const size_t& range) const {
		return static_cast<size_t>(key) % range;
	}
};

template <class K, class V, class F = HashFunc<K>>
class BaseHash {
	protected:

		const size_t INIT_SIZE = 128;
		const double REHASH = 0.75;

		struct Node {
			K key{};
			V value{};

			Node* next{};

			explicit Node(const K& _key, const V& _value)
				: key{_key}, value{_value} {}
			~Node() { delete next; }
		};

		F hash_func{};
		size_t base_size{INIT_SIZE};
		size_t table_size{};
		std::vector<Node*> table;

	public:

		explicit BaseHash() : table{INIT_SIZE, nullptr} {}
		virtual ~BaseHash() = default;

		// Inserts element into a hash table
		void insert(const K& _key, const V& _value) {
			_insert(_key, _value);
		}

		// Removes element from hash table
		void remove(const K& _key) {
			_remove(_key);
		}

		// Searches hash table for element
		const Node* search(const K& _key) {
			return _search(_key);
		}

	protected:
		virtual void rehash() = 0;

		virtual void _insert(const K&, const V&) = 0;
		virtual void _remove(const K&) = 0;
		virtual const Node* _search(const K&) = 0;
};

#endif //LAB_07_BASEHASH_H
