#include "Game.h"
#include "Actor.h"

Game::Game()
:mWindow(nullptr)
,mRenderer(nullptr)
,mIsRunning(true)
,mUpdatingActors(false)
{
	
}

bool Game::Initialize()
{
	LoadData();
	return true;
}

void Game::RunLoop()
{
	while (mIsRunning)
	{
		ProcessInput();
		UpdateGame();
		GenerateOutput();
	}
}

void Game::ProcessInput()
{
  cin.get(mKey);
}

void Game::UpdateGame()
{
	
}

void Game::GenerateOutput()
{
  system("cls");
	for(int x=0;x<13;x++)
    for(int y=0;y<13;y++)
    {
      mActors->Draw();
    }
}

void Game::Shutdown()
{
	UnloadData();
}

void Game::LoadData()
{
	
}

void Game::UnloadData()
{
	for(int x=0;x<13;x++)
    for(int y=0;y<13;y++)
      delete mActor[x][y];
}

void Game::ChangeLevel(int level)
{
  mLevel=level;
}
