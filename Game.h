#pragma once
#include <string>

class Game
{
public:
	Game();
	bool Initialize();
	void RunLoop();
	void Shutdown();
  void ChangeLevel(int level);
	
	Charactor* GetPlayer(){return mPlayer;}

private:
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();
	void LoadData();
	void UnloadData();

	bool mIsRunning;
	class Actor* mActors[12][12];
	class Charactor* mPlayer;
	int mLevel;

};
