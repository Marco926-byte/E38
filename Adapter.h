#ifndef ADAPTER_H
#define ADAPTER_H

#include <iostream>
#include "Media_Player.h"
#include "AAC_Player.h"

class Adapter: public Media_Player

{
private:
    Advanced_Media_Player*ad;
public:
    virtual void play(std::string audio_type, std::string filename) override
    {
        std::cout<<"File format: "<<audio_type<<std::endl;
    }
    
    

};






#endif //ADAPTER_H