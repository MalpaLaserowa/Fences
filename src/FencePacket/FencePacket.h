#ifndef FENCEPACKET_FENCEPACKET_H
#define FENCEPACKET_FENCEPACKET_H


#include "Vector2D.h"
#include "LinkedList.h"
#include "IFenceGenPacket.h"
#include "IFenceDrawPacket.h"

using namespace Utils;

namespace Generators { class genFencePoint; } 
namespace Visualisation { class FenceVisPoint; } 

namespace FencePacket {

/**
 * Class representing one number forming the fence number grind.
 */
class FenceNumber {
  private:
    unsigned int Number;

    bool ToBePrinted;

};
/**
 * Helper class representing 2D point.
 */
class FencePoint {
  private:
    unsigned int x;

    unsigned int y;

};
/**
 * This class defines a data packet describing the fence.
 */
class FencePacket : public Generators::IFenceGenPacket, public Visualisation::IFenceDrawPacket {
  private:
    Vector2D<FenceNumber> FenceNumbers;

    LinkedList<FencePoint> FencePoints;


  public:
    void setNumberBoardSize(unsigned int rows, unsigned int colls);

    virtual void setFenceNumber(unsigned int row, unsigned int coll, unsigned int new_number);

    virtual void getNumberBoardSize(unsigned int & rows, unsigned int & colls);

    virtual void appendFencePoint(const Generators::genFencePoint & NewPoint);

    virtual unsigned int getFenceNumberXY(unsigned int row, unsigned int coll);

    virtual unsigned int getFencePointCount() const;

    const virtual Visualisation::FenceVisPoint& getFencePoint(unsigned int index) const;

};

} // namespace FencePacket
#endif
