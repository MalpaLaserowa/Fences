#ifndef GENERATORS_GENBOARDCELL_H
#define GENERATORS_GENBOARDCELL_H


#include "SharedPtr.h"

namespace Generators { class genFencePoint; } 

namespace Generators {

class genBoardCell {
  private:
    Utils::SharedPtr<genFencePoint> board_stakes[4];

    Utils::SharedPtr<bool> side_rails[4];


  public:
    void triggerSideRails();

};

} // namespace Generators
#endif
