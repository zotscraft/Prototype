/*
 * GameIntroState.hpp
 *
 *  Created on: Aug 23, 2014
 *      Author: enzo
 */

#ifndef GAMEINTROSTATE_HPP_
#define GAMEINTROSTATE_HPP_

#include "include/states/GameState.hpp"

class GameIntroState : public GameState {
public:
	void Init();
	void Finish();

	void Pause();
	void Resume();

	void HandleEvents(GameManager *game_manager);
	void Update(GameManager *game_manager);
	void Draw(GameManager *game_manager);

	static GameIntroState* Instance() {
		return &instance_;
	}

protected:
	GameIntroState();
	~GameIntroState();

private:
	static GameIntroState instance_;
};



#endif /* GAMEINTROSTATE_HPP_ */
