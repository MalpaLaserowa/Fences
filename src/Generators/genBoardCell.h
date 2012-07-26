#ifndef GENERATORS_GENBOARDCELL_H
#define GENERATORS_GENBOARDCELL_H


namespace Generators { class genFencePoint; } 

namespace Generators {

class genBoardCell {
  private:
    genFencePoint * board_stakes[4];

    bool * side_rails[4];


  public:
    void triggerSideRails();

};

} // namespace Generators
#endif
