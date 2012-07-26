#ifndef MAIN_IFENCEGENERATOR_H
#define MAIN_IFENCEGENERATOR_H


namespace Generators { class IFenceGenPacket; } 

namespace Main {

class IFenceGenerator {
  public:
    virtual void generateFenceAndNumbers(Generators::IFenceGenPacket & fpacket) = 0;

};

} // namespace Main
#endif
