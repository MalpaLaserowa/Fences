
#include "TextPlot.h"
#include "IFenceDrawPacket.h"
#include "TextScreenCell.h"

namespace Visualisation {

void TextPlot::prepareTextScreen(unsigned int rows, unsigned int colls) {
  // Bouml preserved body begin 0002F685
    TextScreen.resize(rows * 2 + 1, colls * 2 + 1);
  // Bouml preserved body end 0002F685
}

void TextPlot::printNumbers(const IFenceDrawPacket & fpacket) {
  // Bouml preserved body begin 00024F05
    unsigned int board_rows, board_colls;

    fpacket.getNumberBoardSize(board_rows, board_colls);

    for(int row = 0; row < board_rows; row++)
    {
        for(int coll = 0; coll < board_colls; coll++)
            TextScreen[2 * row + 1][2 * coll + 1].content = fpacket.getFenceNumberXY(row, coll);
    }
  // Bouml preserved body end 00024F05
}

void TextPlot::printFence(const IFenceDrawPacket & fpacket) {
  // Bouml preserved body begin 00024F85

  // Bouml preserved body end 00024F85
}

void TextPlot::printAllStakes() {
  // Bouml preserved body begin 00025005
  // Bouml preserved body end 00025005
}

TextPlot::TextPlot() {
  // Bouml preserved body begin 0002F705
  // Bouml preserved body end 0002F705
}

TextPlot::~TextPlot() {
  // Bouml preserved body begin 0002F985
  // Bouml preserved body end 0002F985
}


} // namespace Visualisation
