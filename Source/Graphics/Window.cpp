#ifndef RTE_GRAPHICS_WINDOW_CPP_
#define RTE_GRAPHICS_WINDOW_CPP_

#include "Graphics/Window.hpp"
#include <exception>

using RTEAPI::Graphics::Window;

Window::Window(const int Width,const int Height,const char* const Title)
{
	window = glfwCreateWindow(Width,Height,Title,NULL,NULL);
	if(!window)
	{
		throw std::exception();
	}
}

Window::~Window(){
	glfwDestroyWindow(window);
}

#endif //RTE_GRAPHICS_WINDOW_CPP_
