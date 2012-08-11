
#include "TextPlot.h"
#include "IFenceDrawPacket.h"
#include "TextScreenCell.h"
#include "FenceVisPoint.h"

namespace Visualisation {

void TextPlot::prepareTextScreen(unsigned int rows, unsigned int cols) {
  // Bouml preserved body begin 0002F685
    m_text_screen_rows = rows * 2 + 1;
    m_text_screen_cols = cols * 2 + 1;

    TextScreen.resize(m_text_screen_rows, m_text_screen_cols);
    clearTextScreen();
  // Bouml preserved body end 0002F685
}

void TextPlot::clearTextScreen() {
  // Bouml preserved body begin 00033085
    for(unsigned int row = 0; row < m_text_screen_rows; row++)
    {
        for(unsigned int col = 0; col < m_text_screen_cols; col++)
        {
            TextScreen[row][col].content = ' ';
        }
    }
  // Bouml preserved body end 00033085
}

void TextPlot::printNumbers(const IFenceDrawPacket & fpacket) {
  // Bouml preserved body begin 00024F05
    unsigned int board_rows, board_colls;

    fpacket.getNumberBoardSize(board_rows, board_colls);

    for(unsigned int row = 0; row < board_rows; row++)
    {
        for(unsigned int coll = 0; coll < board_colls; coll++)
            TextScreen[2 * row + 1][2 * coll + 1].content = fpacket.getFenceNumberXY(row, coll);
    }
  // Bouml preserved body end 00024F05
}

void TextPlot::printFence(const IFenceDrawPacket & fpacket) {
  // Bouml preserved body begin 00024F85

    FenceVisPoint scaled_point;
    FenceVisPoint prevPoint = fpacket.getFencePoint(0); // Tady by bylo lepsi vrace ukazatel na point...

    unsigned int pointCount = fpacket.getFencePointCount();
    for(unsigned int pointIndex = 1; pointIndex < pointCount; pointIndex++)
    {
        const FenceVisPoint& currentPoint = fpacket.getFencePoint(pointIndex);

        int d_x = currentPoint.x - prevPoint.x;
        int d_y = currentPoint.y - prevPoint.y;

        Q_ASSERT(fabs(d_x) <= 1);
        Q_ASSERT(fabs(d_y) <= 1);

        char line = ' ';
        if(d_x)   // Horizontal line
            line = '_';
        else      // Vertical line
            line = '|';

        currentPoint.scale(2.0, scaled_point);
        TextScreen[scaled_point.x + d_x][scaled_point.y + d_y].content = line;

        prevPoint = currentPoint;
    }

    /****/
            /*get point

            loop
            get point
            urci smer
            scale 2;
            nacpi do pole*/
                   //
  // Bouml preserved body end 00024F85
}

void TextPlot::printAllStakes() {
  // Bouml preserved body begin 00025005
  // Bouml preserved body end 00025005
}

TextPlot::TextPlot(unsigned int rows, unsigned int cols){
  // Bouml preserved body begin 0002F705
   prepareTextScreen(rows, cols);
  // Bouml preserved body end 0002F705
}

TextPlot::~TextPlot(){
  // Bouml preserved body begin 0002F985
  // Bouml preserved body end 0002F985
}


} // namespace Visualisation
