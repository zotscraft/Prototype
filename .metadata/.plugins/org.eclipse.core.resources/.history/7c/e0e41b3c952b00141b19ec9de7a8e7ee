/*
 * GameStateManager.hpp
 *
 *  Created on: Aug 23, 2014
 *      Author: enzo
 */

#ifndef GAMESTATEMANAGER_HPP_
#define GAMESTATEMANAGER_HPP_

#include <vector>

class GameState;

class GameStateManager {
public:
	GameStateManager();
	~GameStateManager();

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
};




#endif /* GAMESTATEMANAGER_HPP_ */
