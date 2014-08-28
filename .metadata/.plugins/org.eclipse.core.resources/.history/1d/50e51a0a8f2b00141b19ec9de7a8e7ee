//============================================================================
// Name        : Prototype.cpp
// Author      : zotscraft
// Version     :
// Copyright   : All rights to zotscraft corporation.
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "include/Prototype.hpp"
#include "include/GameObject.hpp"

int main() {
	GameObject* game = new GameObject();
	GameState state;

	game->setState(RUNNING);

	while(state != EXITING) {
		game->setState(EXITING);
		game->getState(&state);
	}

	delete game;
	return 0;
}
