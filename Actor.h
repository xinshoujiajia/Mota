#pragma once
#include<string.h>
class Actor
{
private:
  int x;
  int y;
  string mName;
  string mIcon;
  int mColor;
  class Game* mGame;
public:
  class Game* GetGame(){return mGame;}
  string GetName(){return mName;}
  int GetColor(){return mColor;}
  void Talk(Actor* actor);
  void Draw();
}
