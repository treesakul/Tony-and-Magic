#ifndef WINDOW_HPP
#define WINDOW_HPP

#define _CRT_SECURE_NO_WARNINGS
#include <allegro5\allegro.h>
#include <allegro5\allegro_image.h>
#include<allegro5\allegro_native_dialog.h>
#include <string>
using namespace std;

class Window{
public:
	Window();
	~Window();
	void setBackground(string image);
	virtual int run();

protected:
	ALLEGRO_BITMAP *background;
	ALLEGRO_DISPLAY *display;
	bool done = false;
	char *image_name;

};
#endif