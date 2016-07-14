/*
 * 
 * Based off Alberto Naranjo's CrazyKart
 * https://github.com/Veilkrand/Arduboy-CrazyKart
 */

#include "Arduboy.h"
#include "bitmaps.h"
#include "Sprite.h"
#include "physics.h"
#include "string.h"

//screen 128 x 64 pixels.
// Mid screen 64 x 32 pixels
// Screen constants
const int MID_X=64;
const int MID_Y=32;
const int MAX_X=128;
const int MAX_Y=64;


//game constants
const int player_y=50; //start position
const int player_max_x=25;

int player_x_pos=MID_X;

uint8_t speed=1;
uint8_t framesForSpeed=10;

int roadLine_y_position=-1;
int parallax_offset_x=0;

// make an instance of arduboy used for many functions
Arduboy arduboy;

Sprite player(arduboy,player_x_pos, player_y, pac_open_R, NULL);
Sprite *hearts[3];
char text[16];  
bool isMoving;


void setup() {

  isMoving = false;
  
  // put your setup code here, to run once:

   // initiate arduboy instance
  arduboy.begin();
  //arduboy.beginNoLogo();
  
  // here we set the framerate to 15, we do not need to run at
  // default 60 and it saves us battery life
  arduboy.setFrameRate(60);

  for (uint8_t i=0; i<3; i++){
    hearts[i]= new Sprite(arduboy,MID_X+(i*8)-8,3, BITMAP_heart, NULL);
   // hearts[i]->draw();
  }
  
}

void loop() {

  isMoving = false;

  arduboy.setCursor(MAX_X-8,0);
  sprintf(text, " %s", "test");
  arduboy.print(text);
  
  // pause render until it's time for the next frame
  if (!(arduboy.nextFrame()))
    return;

  arduboy.clear();
  
  player.update();


  if (arduboy.pressed(LEFT_BUTTON) && player.x>player_max_x){
    //player_x_pos--;
    player.move(-1,0);
    parallax_offset_x++;
    isMoving = true;

    if (arduboy.everyXFrames(9)) {
    

      player.loopAnimationStep(2,3);  
    
   }
  }
  if (arduboy.pressed(RIGHT_BUTTON) && player.x<MAX_X-player_max_x){
    //player_x_pos++;
    player.move(1,0);
    parallax_offset_x--;
    isMoving = true;  

    if (arduboy.everyXFrames(9)) {
    
      player.loopAnimationStep(0,1);        
    
   }
  }


  if (arduboy.everyXFrames(1)) {
    roadLine_y_position+=speed;
    
    //player_controller(); 
    
  }

  


  
  for (uint8_t i=0; i<3; i++){
    hearts[i]->draw();
  }

  
  // then we finaly we tell the arduboy to display what we just wrote to the display
  arduboy.display();
}

void player_controller(){

   if(!isMoving)return;
    
   if (arduboy.everyXFrames(9)) {
    
      player.loopAnimationStep(0,1);  
    
   }
  
}

