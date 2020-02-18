
#include "Context.h"
#include <cassert>
#include <stdio.h>

Context::Context(GLFWwindow* window)
	: WindowHandle(window)
{

}

void Context::Init()
{
	glfwMakeContextCurrent(WindowHandle);
	glewExperimental = GL_TRUE;

	if (glewInit()) {
		fprintf(stderr, "Failed to initialize OpenGL loader!\n");
		return;
	}
}

void Context::swap_buffers()
{
	glfwSwapBuffers(WindowHandle);
}