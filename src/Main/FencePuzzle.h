#ifndef MAIN_FENCEPUZZLE_H
#define MAIN_FENCEPUZZLE_H


namespace Main { class IFenceGenerator; } 
namespace Main { class IFenceNumberSelector; } 
namespace Main { class IFenceVisualisation; } 

namespace Main {

class FencePuzzle {
  private:
    IFenceGenerator * Generator;

    IFenceNumberSelector * Selector;

    IFenceVisualisation * Visualisator;

};

} // namespace Main
#endif
