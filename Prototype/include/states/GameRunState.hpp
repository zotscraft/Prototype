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

	void HandleEvents(GameManager *game_manager);
	void Update(GameManager *game_manager);
	void Draw(GameManager *game_manager);

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
