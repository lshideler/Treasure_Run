#include <MeggyJrSimple.h>    // Required code, line 1 of 2.

int xStalagtite = 8;
int yStalagtite = 5; // Declares various variables
int xStalagmite = 8;
int yStalagmite = 2;
int xHead = 1;
int yHead = 5;
int xLeg = 1;
int yLeg = 2;

void setup()                    // run once, when the sketch starts   
{
  MeggyJrSimpleSetup();      // Required code, line 2 of 2.
  Serial.begin(9600);
}

void drawStage()
{
  DrawPx(0,0,Green); // Draws the stage
  DrawPx(1,0,Green);
  DrawPx(2,0,Green);
  DrawPx(3,0,Green);
  DrawPx(4,0,Green);
  DrawPx(5,0,Green);
  DrawPx(6,0,Green);
  DrawPx(7,0,Green);
  DrawPx(0,1,Green);
  DrawPx(1,1,Green);
  DrawPx(2,1,Green);
  DrawPx(3,1,Green);
  DrawPx(4,1,Green);
  DrawPx(5,1,Green);
  DrawPx(6,1,Green);
  DrawPx(7,1,Green);
  DrawPx(0,6,Green);
  DrawPx(1,6,Green);
  DrawPx(2,6,Green);
  DrawPx(3,6,Green);
  DrawPx(4,6,Green);
  DrawPx(5,6,Green);
  DrawPx(6,6,Green);
  DrawPx(7,6,Green);
  DrawPx(0,7,Green);
  DrawPx(1,7,Green);
  DrawPx(2,7,Green);
  DrawPx(3,7,Green);
  DrawPx(4,7,Green);
  DrawPx(5,7,Green);
  DrawPx(6,7,Green);
  DrawPx(7,7,Green);
  
  
  DrawPx(1,3,Red); // Draws the player's charcter
  DrawPx(1,4,Red);
  DisplaySlate();
}

void drawStalagtite()
{
  DrawPx(xStalagtite,yStalagtite,DimBlue);
  DisplaySlate();
}

void moveStalagtite()
{
  xStalagtite = xStalagtite - 1;
  DrawPx(xStalagtite + 1,5,Dark);
  drawStalagtite();
  delay(1000); 
}

void checkStalagtite()
{
  Serial.print("function called");
  if (xStalagtite == 0)
   {
     xStalagtite = 8;
     drawStalagtite();
     DrawPx(0,5,Dark);
   }
  else drawStalagtite();
}

void drawStalagmite()
{
  DrawPx(xStalagmite,yStalagmite,DimBlue);
  DisplaySlate();
}

void moveStalagmite()
{
  xStalagmite = xStalagmite - 1;
  DrawPx(xStalagmite + 1,2,Dark);
  drawStalagmite();
  delay(1000); 
}

void checkStalagmite()
{
  Serial.print("function called");
  if (xStalagmite == 0)
   {
     xStalagmite = 8;
     drawStalagtite();
     DrawPx(0,2,Dark);
   }
  else drawStalagmite();
}

void loop()                     // run over and over again
{
  drawStage();
  moveStalagtite();
  checkStalagtite();
  moveStalagmite();
  checkStalagmite();

CheckButtonsDown();
{
  if (Button_B)
  {       
    xHead = 1;
    yHead = 4;
    DrawPx(xHead,yHead,Red);
    DrawPx(1,5,Dark);
    DisplaySlate(); 
    delay(1000);
    xHead = 1;
    yHead = 5;
    DrawPx(xHead,yHead,Red);
    DisplaySlate();
  } 

  if (Button_A)
  {       
    xLeg = 1;
    yLeg = 3;
    DrawPx(xLeg,yLeg,Red);
    DrawPx(1,2,Dark);
    DisplaySlate();
    delay(1000);
    xLeg = 1;
    yLeg = 2;
    DrawPx(xLeg,yLeg,Red);
    DisplaySlate();
  }  
}
}

