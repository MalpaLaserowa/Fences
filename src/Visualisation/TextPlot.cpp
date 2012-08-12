
#include "TextPlot.h"
#include "IFenceDrawPacket.h"
#include "TextScreenCell.h"

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

    Utils::Point2D scaled_point;
    Utils::Point2D prevPoint = fpacket.getFencePoint(0); // Tady by bylo lepsi vrace ukazatel na point...

    unsigned int pointCount = fpacket.getFencePointCount();
    for(unsigned int pointIndex = 1; pointIndex < pointCount; pointIndex++)
    {
        Utils::Point2D currentPoint = fpacket.getFencePoint(pointIndex);
        Utils::Point2D deltaPoint = currentPoint;

        deltaPoint -= prevPoint;

        Q_ASSERT(abs(deltaPoint.x()) <= 1);
        Q_ASSERT(abs(deltaPoint.y()) <= 1);

        char line = ' ';
        if(deltaPoint.x())   // Horizontal line
            line = '_';
        else      // Vertical line
            line = '|';

        scaled_point = scalePoint(currentPoint, 2.0);
        scaled_point += deltaPoint;
        TextScreen[scaled_point.x()][scaled_point.y()].content = line;

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

Utils::Point2D TextPlot::scalePoint(const Utils::Point2D & point, double scale_factor) {
  // Bouml preserved body begin 00036B85
    Utils::Point2D scaled(point);

    scaled *= scale_factor;
    return scaled;
  // Bouml preserved body end 00036B85
}


} // namespace Visualisation
