#ifndef MP3_PLAYER_H
#define MP3_PLAYER_H


#include <iostream>
#include "Media_Player.h"
class MP3_Player : public Media_Player
{
private:
    /* data */
public:
    virtual void play(std::string audio_type, std::string filename) override
    {
        std::cout<<"MP3 Playing...."<<std::endl;
    }

};






#endif //MP3_PLAYER_H