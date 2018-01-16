#pragma once

#include <glad/glad.h>
#include <GLFW\glfw3.h>
#include<iostream>

namespace Light 
{
	class Window
	{

		friend class Input;

	private:
		const char* title;
		int width, height;
		GLFWwindow* window;

	public:
		Window(const char* title, int width, int height);
		~Window();
		void clear() const;
		void update();
		bool closed() const;

	private:
		void init();
	};
}