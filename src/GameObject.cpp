/*
 * GameObject.cpp
 *
 *  Created on: Aug 21, 2014
 *      Author: enzo
 */

#include <stddef.h>
#include "include/GameObject.hpp"

GameObject::GameObject() :
	state_(INITIALIZING) {

}

GameObject::~GameObject() {

}

error_t GameObject::getState(GameState *state) {
	if(state == NULL) {
		return ERROR_FAIL;
	}
	*state = state_;
	return ERROR_NO;
}

error_t GameObject::setState(GameState state) {
	state_ = state;
	return ERROR_NO;
}
