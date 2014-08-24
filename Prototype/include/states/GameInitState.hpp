/*
 * GameInitState.hpp
 *
 *  Created on: Aug 23, 2014
 *      Author: enzo
 */

#ifndef GAMEINITSTATE_HPP_
#define GAMEINITSTATE_HPP_

#include "include/states/GameState.hpp"

class GameInitState : public GameState {
public:
	void Init();
	void Finish();

	void Pause();
	void Resume();

	void HandleEvents(GameStateManager *state_manager);
	void Update(GameStateManager *state_manager);
	void Draw(GameStateManager *state_manager);

	static GameInitState* Instance() {
		return &instance_;
	}

protected:
	GameInitState();
	~GameInitState();

private:
	static GameInitState instance_;
};



#endif /* GAMEINITSTATE_HPP_ */
