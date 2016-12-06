//
// Created by lieroz on 05.12.16.
//

#ifndef LAB_12_TASKFUNCTIONS_H
#define LAB_12_TASKFUNCTIONS_H

#include <stdbool.h>
#include <stdlib.h>
#include <memory.h>

#include "Helpers.h"
#include "Colors.h"

// Prints into stdout all supplier names which are located in one city.
void GetCityLocalizedSuppliers();

// Prints into stdout all engaged suppliers.
void GetAllEngagedSuppliers();

// Returns total cost of products which Supplier ships.
void GetTotalProductCostBySupplier(int supplier_id);

#endif //LAB_12_TASKFUNCTIONS_H
