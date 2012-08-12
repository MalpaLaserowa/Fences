
#include "FencePacket.h"

namespace FencePack {

void FencePacket::setNumberBoardSize(unsigned int rows, unsigned int cols) {
  // Bouml preserved body begin 00022F85
    FenceNumbers.resize(rows, cols);
  // Bouml preserved body end 00022F85
}

unsigned int FencePacket::getFencePointCount() const {
  // Bouml preserved body begin 00032F85
    return FencePoints.size();
  // Bouml preserved body end 00032F85
}

unsigned int FencePacket::getFenceNumberXY(unsigned int row, unsigned int col) const {
  // Bouml preserved body begin 00036485
    return FenceNumbers[row][col].Number;
  // Bouml preserved body end 00036485
}

void FencePacket::setFenceNumber(unsigned int row, unsigned int col, unsigned int new_number) {
  // Bouml preserved body begin 00036585
    FenceNumbers[row][col].Number = new_number;
  // Bouml preserved body end 00036585
}

void FencePacket::getNumberBoardSize(unsigned int & rows, unsigned int & cols) const {
  // Bouml preserved body begin 00036705
    FenceNumbers.size(rows, cols);
  // Bouml preserved body end 00036705
}

void FencePacket::appendFencePoint(const Utils::Point2D & NewPoint) {
  // Bouml preserved body begin 00036985
    FencePoints.append(NewPoint);
  // Bouml preserved body end 00036985
}

Utils::Point2D FencePacket::getFencePoint(unsigned int index) const {
  // Bouml preserved body begin 00036A05
    return FencePoints[index];
  // Bouml preserved body end 00036A05
}


} // namespace FencePack
