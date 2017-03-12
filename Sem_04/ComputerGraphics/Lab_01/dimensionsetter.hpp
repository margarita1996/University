#ifndef DIMENSIONSETTER_HPP
#define DIMENSIONSETTER_HPP

#include <QGraphicsView>
#include <QMessageBox>
#include <QVector>
#include <QPoint>

class DimensionSetter {
    public:
        explicit DimensionSetter() = default;
        virtual ~DimensionSetter() = default;

        static void setUpDimension(QGraphicsScene*, QVector<QPoint>&, QVector<QPoint>&);
};

#endif // DIMENSIONSETTER_HPP