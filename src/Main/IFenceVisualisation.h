#ifndef MAIN_IFENCEVISUALISATION_H
#define MAIN_IFENCEVISUALISATION_H


namespace Visualisation { class IFenceDrawPacket; } 

namespace Main {

class IFenceVisualisation {
  public:
    virtual void printNumbers(const Visualisation::IFenceDrawPacket & fpacket) = 0;

    virtual void printFence(const Visualisation::IFenceDrawPacket & fpacket) = 0;

    virtual void printAllStakes() = 0;

};

} // namespace Main
#endif
