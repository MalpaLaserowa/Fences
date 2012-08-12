#ifndef UTILS_POINT2D_H
#define UTILS_POINT2D_H


#include <QPoint>


namespace Utils {

class Point2D : public QPoint {
  public:
    Point2D(unsigned int x, unsigned int y) : QPoint(x, y) {}

    Point2D(): QPoint() {}

};

} // namespace Utils
#endif
