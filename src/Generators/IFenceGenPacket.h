#ifndef GENERATORS_IFENCEGENPACKET_H
#define GENERATORS_IFENCEGENPACKET_H


namespace Generators { class genFencePoint; } 

namespace Generators {

/**
 * This interface defines what methods an input packet of generator has to provide (Servant design pattern).
 */
class IFenceGenPacket {
  public:
    virtual void setFenceNumber(unsigned int row, unsigned int coll, unsigned int new_number) = 0;

    virtual void getNumberBoardSize(unsigned int & rows, unsigned int & colls) = 0;

    virtual void appendFencePoint(const genFencePoint & NewPoint) = 0;

};

} // namespace Generators
#endif
