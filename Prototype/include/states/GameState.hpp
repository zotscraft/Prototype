/*
 * GameState.hpp
 *
 *  Created on: Aug 23, 2014
 *      Author: enzo
 */

#ifndef GAMESTATE_HPP_
#define GAMESTATE_HPP_

#include "include/GameManager.hpp"

class GameState {
public:
	virtual ~GameState() {}

	virtual void Init() = 0;
	virtual void Finish() = 0;

	virtual void Pause() = 0;
	virtual void Resume() = 0;

	virtual void HandleEvents(GameManager *game_manager) = 0;
	virtual void Update(GameManager *game_manager) = 0;
	virtual void Draw(GameManager *game_manager) = 0;

	void ChangeState(GameManager *game_manager, GameState *state) {
		game_manager->ChangeState(state);
	}

protected:
	GameState() {}
};

#endif /* GAMESTATE_HPP_ */
