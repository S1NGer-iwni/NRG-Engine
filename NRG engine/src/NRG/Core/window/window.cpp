//#include "window.h"
//
//static void glfw_error_callback(int error, const char* description)
//{
//	fprintf(stderr, "Glfw Error %d: %s\n", error, description);
//}
//
//inline int WindowImpl::window_init(GLFWwindow* window, const char* glsl_version)
//{
//	glfwSetErrorCallback(glfw_error_callback);
//
//	if (!glfwInit())
//	{
//		return 1;
//	}
//
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
//	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
//
//	if (window == NULL)
//		return 1;
//	glfwMakeContextCurrent(window);
//	glfwSwapInterval(1);
//
///*#if defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)
//	bool err = glewInit() != 0;
//#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)
//	bool err = glewInit() != GLEW_OK;
//#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)
//	bool err = gladLoadGL() == 0;
//#else
//	bool err = false;
//#endif
//	if (err)
//	{
//		fprintf(stderr, "Failed to initialize OpenGL loader!\n");
//		return 1;
//	}*/
//
//
//	/*return 0;
//}*/