#ifndef GENERATORS_GENFENCEPOINT_H
#define GENERATORS_GENFENCEPOINT_H


#include "Point2D.h"

namespace Generators {

class genFencePoint : public Utils::Point2D {
  private:
    genFencePoint *Neighbours[4];


  public:
    bool included_in_fence;

    genFencePoint() : Point2D() {}

};

} // namespace Generators
#endif
