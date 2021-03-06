/*
 * GameDisplay.cpp
 *
 *  Created on: Aug 24, 2014
 *      Author: enzo
 */

#include "include/GameDisplay.hpp"
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_native_dialog.h>

void GameDisplay::Init() {
	// init allegro
	al_init();

//	if(!al_init()) {
//	   //fprintf(stderr, "failed to initialize allegro!\n");
//	   return -1;
//	}
//	al_init_image_addon();
	display_ = al_create_display(640, 480);
//	if(!display_) {
//	   fprintf(stderr, "failed to create display!\n");
//	   return -1;
//	}


	al_clear_to_color(al_map_rgb(0,0,0));

	al_flip_display();
	al_rest(0.1);

}

void GameDisplay::Finish() {
	al_destroy_display(display_);
}

