/*
 * GameStateManager.cpp
 *
 *  Created on: Aug 23, 2014
 *      Author: enzo
 */

#include <stddef.h>
#include "include/states/GameStateManager.hpp"
#include "include/states/GameState.hpp"

GameStateManager::GameStateManager()
	: states_(),
	  running_(false) {

}

GameStateManager::~GameStateManager() {

}

void GameStateManager::Init() {

}

void GameStateManager::Finish() {

}

void GameStateManager::Start() {

}

void GameStateManager::Stop() {

}

bool GameStateManager::isRunning() {
	return running_;
}

void GameStateManager::HandleEvents() {

}

void GameStateManager::Update() {

}

void GameStateManager::Draw() {

}

void GameStateManager::ChangeState(GameState *state) {

}

void GameStateManager::PushState(GameState *state) {

}

void GameStateManager::PopState() {

}
