#ifndef VISUALISATION_IFENCEDRAWPACKET_H
#define VISUALISATION_IFENCEDRAWPACKET_H


namespace Visualisation { class FenceVisPoint; } 

namespace Visualisation {

/**
 * This interface defines methods that a drawable fence packet has to provide. (Servant design pattern)
 */
class IFenceDrawPacket {
  public:
    virtual unsigned int getFenceNumberXY(unsigned int row, unsigned int coll) = 0;

    virtual void getNextFencePoint(FenceVisPoint & fpoint) = 0;

};

} // namespace Visualisation
#endif
