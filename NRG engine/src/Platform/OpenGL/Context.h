#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>


typedef struct Context
{
	Context(GLFWwindow* window);

	void Init();
	void swap_buffers();

	GLFWwindow* WindowHandle;
};
