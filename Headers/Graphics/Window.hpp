#ifndef RTE_GRAPHICS_WINDOW_HPP_
#define RTE_GRAPHICS_WINDOW_HPP_

#include <GLFW/glfw3.h>

///\headerfile "Graphics/Window.hpp"

namespace RTEAPI {
	namespace Graphics {
		///\brief Create, destroy and manipulate a window
		class Window {
			public:
				///\brief Window base constuctor
				///
				///\warning Don't create multiple windows. This may cause errors.
				///
				///\param[in] Width Width of Window.
				///\param[in] Height Height of Window.
				///\param[in] Title "C" string. Window title.
				///
				///\exception std::exception Failed to initialize glfw, or create a window.
				Window(const int Width,const int Height,const char* const Title);

				///\brief Window destructor
				///
				///Close and destroy window. 
				~Window();

			private:
				///\brief GLFW base window object.
				GLFWwindow* window;
			};
	}
}
#endif //ifndef RTE_GRAPHICS_WINDOW_HPP_
