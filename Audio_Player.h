#ifndef AUDIO_PLAYER_H
#define AUDIO_PLAYER_H


#include <iostream>
#include "Adapter.h"
#include "Media_Player.h"
class Audio_Player : public Media_Player
{
private:
    /* data */
    Adapter*ad;
public:
    Audio_Player()
    {
        ad=new Adapter;
    }
    virtual void play(std::string audio_type, std::string filename) override
    {
        if(audio_type!="wav")
        {
            
            ad->play(audio_type,filename);

        }
        else
            std::cout<<"AudioPlayer playing WAV"<< std::endl;


    }

};






#endif //AUDIO_PLAYER_H