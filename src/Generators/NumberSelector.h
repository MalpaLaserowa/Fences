#ifndef GENERATORS_NUMBERSELECTOR_H
#define GENERATORS_NUMBERSELECTOR_H


#include "IFenceNumberSelector.h"

namespace FencePack { class FencePacket; } 

namespace Generators {

class NumberSelector : public Main::IFenceNumberSelector {
  public:
    virtual void selectNumbersToPrint(FencePack::FencePacket & fpacket);

    NumberSelector();

    virtual ~NumberSelector();

};

} // namespace Generators
#endif
