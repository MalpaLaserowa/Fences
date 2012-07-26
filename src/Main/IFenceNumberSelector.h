#ifndef MAIN_IFENCENUMBERSELECTOR_H
#define MAIN_IFENCENUMBERSELECTOR_H


namespace FencePacket { class FencePacket; } 

namespace Main {

class IFenceNumberSelector {
  public:
    virtual void selectNumbersToPrint(FencePacket::FencePacket & fpacket) = 0;

};

} // namespace Main
#endif
