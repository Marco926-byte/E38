#ifndef ADVANCED_MEDIA_PLAYER_H
#define ADVANCED_MEDIA_PLAYER_H

#include <iostream>

class Advanced_Media_Player
{
private:
    /* data */
public:
    virtual void play(std::string audio_type, bool check_DRM)=0;

};






#endif //ADVANCED_MEDIA_PLAYER_H