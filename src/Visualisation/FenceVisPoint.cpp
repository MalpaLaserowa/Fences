
#include "FenceVisPoint.h"

namespace Visualisation {

void FenceVisPoint::scale(double scaling_factor, FenceVisPoint & scaled_point) const {
  // Bouml preserved body begin 00023105
    scaled_point.x = x * scaling_factor;
    scaled_point.y = y * scaling_factor;
  // Bouml preserved body end 00023105
}

FenceVisPoint::FenceVisPoint(){
  // Bouml preserved body begin 00031485
    x = y = 0;
  // Bouml preserved body end 00031485
}


} // namespace Visualisation
