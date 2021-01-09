#include"Actor.h"
#include<Windows.h>
#include<iostream>

void SetColor(int x){
	HANDLE h = GetStdHandle (-11);
	SetConsoleTextAttribute(h,x);
}

void GoToXY(int x, int y) //goto语句
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

void Actor::MoveTo(Actor* actor)
{
  actor->SetPosition(X,Y);
	GoToXY(X,Y);
	actor->Draw();
}

Actor::Actor(Game* game)
  :X(0)
  ,Y(0)
  ,mColor(15)
  ,mIcon("  ")
  ,mName("None")
{
  
}
