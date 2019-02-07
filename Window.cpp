#include "Window.hpp"
#include<iostream>
Window::Window(){

}
Window::~Window(){

}
void Window::setBackground(string image){
	if (!al_init()){
		al_show_native_message_box(NULL, NULL, NULL, "Could not", NULL, NULL);
	}
	al_init_image_addon();
	char *cstr = new char[image.length() + 1];
	strcpy(cstr, image.c_str());
	image_name = cstr;
	delete[] cstr;
}
int Window::run(){
	
	display = al_create_display(800, 600);
	al_set_window_title(display, " Tony and Magic Marker");
	background = al_load_bitmap(image_name);


	while (!done){

		al_flip_display();
		al_draw_bitmap(background, 0, 0, NULL);
	}

	al_destroy_display(display);
	system("pause");
	return 0;
}