/*
 * GameManager.hpp
 *
 *  Created on: Aug 23, 2014
 *      Author: enzo
 */

#ifndef GAMEMANAGER_HPP_
#define GAMEMANAGER_HPP_

#include <vector>
#include "include/GameDisplay.hpp"

class GameState;

class GameManager {
public:
	GameManager();
	~GameManager();

	void Init();
	void Finish();

	void Start();
	void Stop();

	bool isRunning();

	void HandleEvents();
	void Update();
	void Draw();

	void ChangeState(GameState *state);
	void PushState(GameState *state);
	void PopState();

protected:
	std::vector<GameState*> states_;
	bool running_;
	GameDisplay* display_;
};




#endif /* GAMEMANAGER_HPP_ */
