#ifndef VISUALISATION_IFENCEDRAWPACKET_H
#define VISUALISATION_IFENCEDRAWPACKET_H


#include "Point2D.h"

namespace Visualisation {

/**
 * This interface defines methods that a drawable fence packet has to provide. (Servant design pattern)
 */
class IFenceDrawPacket {
  public:
    virtual unsigned int getFenceNumberXY(unsigned int row, unsigned int col) const = 0;

    virtual Utils::Point2D getFencePoint(unsigned int index) const = 0;

    virtual void getNumberBoardSize(unsigned int & rows, unsigned int & cols) const = 0;

    virtual unsigned int getFencePointCount() const = 0;

    virtual ~IFenceDrawPacket() {}

};

} // namespace Visualisation
#endif
