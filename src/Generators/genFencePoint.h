#ifndef GENERATORS_GENFENCEPOINT_H
#define GENERATORS_GENFENCEPOINT_H


namespace Generators {

class genFencePoint {
  private:
    genFencePoint *Neighbours[4];


  public:
    bool included_in_fence;

    unsigned int x;

    unsigned int y;

};

} // namespace Generators
#endif
