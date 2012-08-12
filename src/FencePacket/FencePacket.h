#ifndef FENCEPACK_FENCEPACKET_H
#define FENCEPACK_FENCEPACKET_H


#include "Point2D.h"
#include "IFenceGenPacket.h"
#include "IFenceDrawPacket.h"
#include "Vector2D.h"
#include "LinkedList.h"

namespace FencePack {

/**
 * Class representing one number forming the fence number grind.
 */
class FenceNumber {
  public:
    unsigned int Number;

    bool ToBePrinted;

};
/**
 * This class defines a data packet describing the fence.
 */
class FencePacket : public Generators::IFenceGenPacket, public Visualisation::IFenceDrawPacket {
  private:
    Utils::Vector2D<FenceNumber> FenceNumbers;

    Utils::LinkedList<Utils::Point2D> FencePoints;


  public:
    void setNumberBoardSize(unsigned int rows, unsigned int cols);

    virtual unsigned int getFencePointCount() const;

    virtual unsigned int getFenceNumberXY(unsigned int row, unsigned int col) const;

    virtual void setFenceNumber(unsigned int row, unsigned int col, unsigned int new_number);

    virtual void getNumberBoardSize(unsigned int & rows, unsigned int & cols) const;

    virtual void appendFencePoint(const Utils::Point2D & NewPoint);

    virtual Utils::Point2D getFencePoint(unsigned int index) const;

};

} // namespace FencePack
#endif
