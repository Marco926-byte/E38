#include <iostream>
#include "Media_Player.h"
#include "Advanced_Media_Player.h"
#include "AAC_Player.h"
#include "MP3_Player.h"
#include "Audio_Player.h"
#include "Adapter.h"
int main()
{
    
    Audio_Player *ap= new Audio_Player;
    
    ap->play("wav","test.wav");
    ap->play("mp3","test.mp3");
    ap->play("aac","test.mp3");
    
    
    
    
    
    
}
