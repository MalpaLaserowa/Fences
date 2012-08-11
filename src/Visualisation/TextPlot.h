#ifndef VISUALISATION_TEXTPLOT_H
#define VISUALISATION_TEXTPLOT_H


#include "IFenceVisualisation.h"
#include "Vector2D.h"

namespace Visualisation { class IFenceDrawPacket; } 
namespace Visualisation { class TextScreenCell; } 
namespace Visualisation { class FenceVisPoint; } 

namespace Visualisation {

/**
 * *
 *  * Class responsible for text representation of fence drawings.
 */
class TextPlot : public Main::IFenceVisualisation {
  private:
    unsigned int m_text_screen_rows;

    unsigned int m_text_screen_cols;

    void prepareTextScreen(unsigned int rows, unsigned int cols);

    void clearTextScreen();


  public:
    virtual void printNumbers(const IFenceDrawPacket & fpacket);

    virtual void printFence(const IFenceDrawPacket & fpacket);

    virtual void printAllStakes();


  private:
    Utils::Vector2D<TextScreenCell> TextScreen;


  public:
    TextPlot(unsigned int rows, unsigned int cols);

    virtual ~TextPlot();

};

} // namespace Visualisation
#endif
