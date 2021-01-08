#include"Actor.h"
#include<Windows.h>
#include<iostream>

void SetColor(int x){
	HANDLE h = GetStdHandle (-11);
	SetConsoleTextAttribute(h,x);
}

void Actor::Draw()
{
  SetColor(mColor);
  std::cout<<mIcon;
}

void Actor::Talk(Actor* actor)
{
  actor->SetPosition(x,y);
}

Actor::Actor(Game* game)
  :x(0)
  ,y(0)
  ,mColor(15)
  ,mIcon("  ")
  ,mName("None")
{
  
}
