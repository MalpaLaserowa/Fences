#ifndef GENERATORS_EXPANSIVEGENERATOR_H
#define GENERATORS_EXPANSIVEGENERATOR_H


#include "IFenceGenerator.h"
#include "Vector2D.h"
#include "LinkedList.h"

namespace Generators { class genBoardCell; } 
namespace Generators { class genFencePoint; } 
namespace Generators { class IFenceGenPacket; } 

namespace Generators {

class ExpansiveGenerator : public Main::IFenceGenerator {
  private:
    Utils::Vector2D<genBoardCell> gen_board;

    Utils::Vector2D<genFencePoint> fence_point_pool;

    Utils::Vector2D<bool> horizontal_rail_pool;

    Utils::Vector2D<bool> vertiacal_rail_pool;

    Utils::LinkedList<genBoardCell*> expanded_cells;

    void prepareGenBoard(unsigned int rows, unsigned int colls);

    void prepareNextExpansion();

    void doExpansion();


  public:
    virtual void generateFenceAndNumbers(IFenceGenPacket & fpacket);

    ExpansiveGenerator();

    virtual ~ExpansiveGenerator();

};

} // namespace Generators
#endif
