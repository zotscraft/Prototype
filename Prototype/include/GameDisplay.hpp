/*
 * GameDisplay.hpp
 *
 *  Created on: Aug 24, 2014
 *      Author: enzo
 */

#ifndef GAMEDISPLAY_HPP_
#define GAMEDISPLAY_HPP_

#include <allegro5/allegro.h>

class GameDisplay {
public:
	void Init();
	void Finish();

private:
	ALLEGRO_DISPLAY *display_;
};

#endif /* GAMEDISPLAY_HPP_ */
