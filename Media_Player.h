#ifndef MEDIA_PLAYER_H
#define MEDIA_PLAYER_H

#include <iostream>

class Media_Player
{

public:
    virtual void play(std::string audio_type, std::string filename)=0;
};






#endif //MEDIA_PLAYER_H