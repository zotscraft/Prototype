/*
 * GameManager.cpp
 *
 *  Created on: Aug 23, 2014
 *      Author: enzo
 */

#include "include/GameManager.hpp"
#include "include/states/GameState.hpp"

GameManager::GameManager()
	: states_(),
	  running_(false),
	  display_() {

}

GameManager::~GameManager() {

}

void GameManager::Init() {
	display_ = new GameDisplay();
	display_->Init();
}

void GameManager::Finish() {
	// finish all states
	while(!states_.empty()) {
		states_.back()->Finish();
		states_.pop_back();
	}

	display_->Finish();
	delete display_;
}

void GameManager::Start() {
	running_ = true;
}

void GameManager::Stop() {
	running_ = false;
}

bool GameManager::isRunning() {
	return running_;
}

void GameManager::HandleEvents() {
	states_.back()->HandleEvents(this);
}

void GameManager::Update() {
	states_.back()->Update(this);
}

void GameManager::Draw() {
	states_.back()->Draw(this);
}

void GameManager::ChangeState(GameState *state) {
	// finish current state
	if(!states_.empty()) {
		states_.back()->Finish();
		states_.pop_back();
	}

	// store and init new state
	states_.push_back(state);
	states_.back()->Init();
}

void GameManager::PushState(GameState *state) {
	// pause current state
	if(!states_.empty()) {
		states_.back()->Pause();
	}

	// store and init new state
	states_.push_back(state);
	states_.back()->Init();
}

void GameManager::PopState() {
	// finish current state
	if(!states_.empty()) {
		states_.back()->Finish();
		states_.pop_back();
	}

	// resume previous state
	if(!states_.empty()) {
		states_.back()->Resume();
	}
}
