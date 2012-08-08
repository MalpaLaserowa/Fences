#ifndef GENERATORS_NUMBERSELECTOR_H
#define GENERATORS_NUMBERSELECTOR_H


#include "IFenceNumberSelector.h"

namespace FencePacket { class FencePacket; } 

namespace Generators {

class NumberSelector : public Main::IFenceNumberSelector {
  public:
    virtual void selectNumbersToPrint(FencePacket::FencePacket & fpacket);

    NumberSelector();

    virtual ~NumberSelector();

};

} // namespace Generators
#endif
