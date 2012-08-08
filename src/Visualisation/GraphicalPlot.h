#ifndef VISUALISATION_GRAPHICALPLOT_H
#define VISUALISATION_GRAPHICALPLOT_H


#include "IFenceVisualisation.h"

namespace Visualisation { class IFenceDrawPacket; } 

namespace Visualisation {

/**
 * Class responsible for graphical representation of fence drawings.
 */
class GraphicalPlot : public Main::IFenceVisualisation {
  public:
    virtual void printNumbers(const IFenceDrawPacket & fpacket);

    virtual void printFence(const IFenceDrawPacket & fpacket);

    virtual void printAllStakes();

    virtual ~GraphicalPlot();

};

} // namespace Visualisation
#endif
