#ifndef VISUALISATION_TEXTPLOT_H
#define VISUALISATION_TEXTPLOT_H


#include "IFenceVisualisation.h"

namespace Visualisation { class IFenceDrawPacket; } 

namespace Visualisation {

/**
 * Class responsible for text representation of fence drawings.
 */
class TextPlot : public Main::IFenceVisualisation {
  public:
    virtual void printNumbers(const IFenceDrawPacket & fpacket);

    virtual void printFence(const IFenceDrawPacket & fpacket);

    virtual void printAllStakes();

};

} // namespace Visualisation
#endif
