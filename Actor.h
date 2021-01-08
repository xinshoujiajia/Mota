#pragma once
#include<string.h>
class Actor
{
private:
  int X;
  int Y;
  string mName;
  string mIcon;
  int mColor;
  class Game* mGame;
public:
  Actor(Game* game);
  ~Actor();
  class Game* GetGame(){return mGame;}
  
  void SetPosition(int x,int y){X=x;Y=y;}
  void SetX(int x){X=x;}
  void SetY(int y){Y=y;}
  int GetX(){return X;}
  int GetY(){return Y;}
  
  void SetName(string name){mName=name;}
  string GetName(){return mName;}
  
  void SetColor(int color){mColor=color;}
  int GetColor(){return mColor;}
  
  void Talk(Actor* actor);
  void Draw();
}
