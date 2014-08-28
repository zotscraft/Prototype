//============================================================================
// Name        : Prototype.cpp
// Author      : zotscraft
// Version     :
// Copyright   : All rights to zotscraft corporation.
// Description :
//============================================================================

#include "include/GameManager.hpp"
#include "include/states/GameIntroState.hpp"

int main(int argc, char **argv) {
	GameManager game_manager;

	game_manager.Init();
	game_manager.Start();
	game_manager.ChangeState(GameIntroState::Instance());

	while(game_manager.isRunning()) {
		game_manager.HandleEvents();
		game_manager.Update();
		game_manager.Draw();
		game_manager.Stop();
	}

	game_manager.Finish();
	return 0;
}

