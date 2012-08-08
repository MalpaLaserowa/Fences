#ifndef VISUALISATION_TEXTPLOT_H
#define VISUALISATION_TEXTPLOT_H


#include "IFenceVisualisation.h"
#include "Vector2D.h"

namespace Visualisation { class IFenceDrawPacket; } 
namespace Visualisation { class TextScreenCell; } 

namespace Visualisation {

/**
 * Class responsible for text representation of fence drawings.
 */
class TextPlot : public Main::IFenceVisualisation {
  private:
    void prepareTextScreen(unsigned int rows, unsigned int colls);


  public:
    virtual void printNumbers(const IFenceDrawPacket & fpacket);

    virtual void printFence(const IFenceDrawPacket & fpacket);

    virtual void printAllStakes();


  private:
    Utils::Vector2D<TextScreenCell> TextScreen;


  public:
    TextPlot();

    virtual ~TextPlot();

};

} // namespace Visualisation
#endif
