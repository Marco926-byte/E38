#ifndef AAC_PLAYER_H
#define AAC_PLAYER_H


#include <iostream>
#include "Advanced_Media_Player.h"
class AAC_Player : public Advanced_Media_Player
{
private:
    /* data */
public:
    virtual void play(std::string, bool check_DRM) override
    {
        std::cout<<"AAC Playing...."<<std::endl;
    }

};






#endif //AAC_PLAYER_H