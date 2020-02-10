#define GLEW_STATIC

#include <stdio.h>
#include <GL/glew.h>   
#include <GLFW/glfw3.h>

#include "imgui/imguiImpl.h"
#include "imgui/imguiImpl.cpp"



static void glfw_error_callback(int error, const char* description)
{
	fprintf(stderr, "Glfw Error %d: %s\n", error, description);
}

int main(int argc, char** argv)
{
	glfwSetErrorCallback(glfw_error_callback);
	ImGuiImpl imguiImpl;

	const char* glsl_version = "#version 130";
	
	
	

	if (!glfwInit())
	{
		return 1;
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

	GLFWwindow* window = glfwCreateWindow(1280, 720, "NRG engine", NULL, NULL);

	if (window == NULL)
		return 1;

	glfwMakeContextCurrent(window);
	glfwSwapInterval(1); 

	// Initialize OpenGL loader
#if defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)
	bool err = glewInit() != 0;
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)
	bool err = glewInit() != GLEW_OK;
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)
	bool err = gladLoadGL() == 0;
#else
	bool err = false; // If you use IMGUI_IMPL_OPENGL_LOADER_CUSTOM, your loader is likely to requires some form of initialization.
#endif
	if (err)
	{
		fprintf(stderr, "Failed to initialize OpenGL loader!\n");
		return 1;
	}
	
	imguiImpl.imgui_init();

	ImGui_ImplGlfw_InitForOpenGL(window, true);
	ImGui_ImplOpenGL3_Init(glsl_version);


	bool show_demo_window = true;
	bool show_another_window = false;
	ImVec4 clear_color = ImVec4(0.3f, 0.1f, 1.0f, 1.0f);
	//ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f); default

	// Main loop
	while (!glfwWindowShouldClose(window))
	{
		//for Events
		glfwPollEvents();

		imguiImpl.imgui_settings(show_demo_window, clear_color);

		int w, h;
		glfwMakeContextCurrent(window);
		glfwGetFramebufferSize(window, &w, &h);
		glViewport(0, 0, w, h);
		glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
		glClear(GL_COLOR_BUFFER_BIT);

		imguiImpl.imgui_render();

		glfwMakeContextCurrent(window);
		glfwSwapBuffers(window);
	}

	imguiImpl.imgui_clear();
	glfwDestroyWindow(window);
	glfwTerminate();

	return 0;
}
