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
  Actor(Game* game);
  ~Actor();
  class Game* GetGame(){return mGame;}
  
  void SetName(string name){mName=name;}
  string GetName(){return mName;}
  
  void SetColor(int color){mColor=color;}
  int GetColor(){return mColor;}
  
  void Talk(Actor* actor);
  void Draw();
}
