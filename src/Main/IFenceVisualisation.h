#ifndef MAIN_IFENCEVISUALISATION_H
#define MAIN_IFENCEVISUALISATION_H


#include "Point2D.h"

namespace Visualisation { class IFenceDrawPacket; } 

namespace Main {

class IFenceVisualisation {
  public:
    virtual void printNumbers(const Visualisation::IFenceDrawPacket & fpacket) = 0;

    virtual void printFence(const Visualisation::IFenceDrawPacket & fpacket) = 0;

    virtual void printAllStakes() = 0;

    virtual ~IFenceVisualisation() {};


  protected:
    virtual Utils::Point2D scalePoint(const Utils::Point2D & point, double scale_factor) = 0;

};

} // namespace Main
#endif
