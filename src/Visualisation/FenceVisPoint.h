#ifndef VISUALISATION_FENCEVISPOINT_H
#define VISUALISATION_FENCEVISPOINT_H


namespace Visualisation {

class FenceVisPoint {
  public:
    unsigned int x;

    unsigned int y;

    void scale(double scaling_factor, FenceVisPoint & scaled_point) const;

    FenceVisPoint();

};

} // namespace Visualisation
#endif
