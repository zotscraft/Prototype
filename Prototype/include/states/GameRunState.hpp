/*
 * GameRunState.hpp
 *
 *  Created on: Aug 23, 2014
 *      Author: enzo
 */

#ifndef GAMERUNSTATE_HPP_
#define GAMERUNSTATE_HPP_

#include "include/states/GameState.hpp"

class GameRunState : public GameState {
public:
	void Init();
	void Finish();

	void Pause();
	void Resume();

	void HandleEvents(GameStateManager *state_manager);
	void Update(GameStateManager *state_manager);
	void Draw(GameStateManager *state_manager);

	static GameRunState* Instance() {
		return &instance_;
	}

protected:
	GameRunState();
	~GameRunState();

private:
	static GameRunState instance_;
};



#endif /* GAMERUNSTATE_HPP_ */
