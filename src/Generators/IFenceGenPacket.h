#ifndef GENERATORS_IFENCEGENPACKET_H
#define GENERATORS_IFENCEGENPACKET_H


namespace Utils { class Point2D; } 

namespace Generators {

/**
 * This interface defines what methods an input packet of generator has to provide (Servant design pattern).
 */
class IFenceGenPacket {
  public:
    virtual void setFenceNumber(unsigned int row, unsigned int col, unsigned int new_number) = 0;

    virtual void getNumberBoardSize(unsigned int & rows, unsigned int & cols) const = 0;

    virtual void appendFencePoint(const Utils::Point2D & NewPoint) = 0;

};

} // namespace Generators
#endif
