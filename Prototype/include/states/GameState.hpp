/*
 * GameState.hpp
 *
 *  Created on: Aug 23, 2014
 *      Author: enzo
 */

#ifndef GAMESTATE_HPP_
#define GAMESTATE_HPP_

#include "include/states/GameStateManager.hpp"

class GameState {
public:
	virtual ~GameState() {}

	virtual void Init() = 0;
	virtual void Finish() = 0;

	virtual void Pause() = 0;
	virtual void Resume() = 0;

	virtual void HandleEvents(GameStateManager *state_manager) = 0;
	virtual void Update(GameStateManager *state_manager) = 0;
	virtual void Draw(GameStateManager *state_manager) = 0;

	void ChangeState(GameStateManager *state_manager, GameState *state) {
		state_manager->ChangeState(state);
	}

protected:
	GameState() {}
};

#endif /* GAMESTATE_HPP_ */
