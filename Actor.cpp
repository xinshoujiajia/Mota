#include"Actor.h"
#include<Windows.h>
#include<iostream>

void SetColor(int x){
	HANDLE h = GetStdHandle (-11);
	SetConsoleTextAttribute(h,x);
}

void gotoxy(int x, int y) //goto语句
{
	COORD pos;
	pos.X = x - 1;
	pos.Y = y - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void Actor::Draw()
{
  SetColor(mColor);
  std::cout<<mIcon;
}

void Actor::Talk(Actor* actor)
{
  actor->SetPosition(x,y);
  gotoxy
}

Actor::Actor(Game* game)
  :x(0)
  ,y(0)
  ,mColor(15)
  ,mIcon("  ")
  ,mName("None")
{
  
}
