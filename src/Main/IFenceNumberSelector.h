#ifndef MAIN_IFENCENUMBERSELECTOR_H
#define MAIN_IFENCENUMBERSELECTOR_H


namespace FencePack { class FencePacket; } 

namespace Main {

class IFenceNumberSelector {
  public:
    virtual void selectNumbersToPrint(FencePack::FencePacket & fpacket) = 0;

    virtual ~IFenceNumberSelector() {};

};

} // namespace Main
#endif
