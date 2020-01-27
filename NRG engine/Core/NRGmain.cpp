#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <stdio.h>    --> IT WILL BE NEED FOR USING MODERN OPENGL!



#define static global_variable // static variable in the global scope
#define static local_persist // static vairable in the functin
#define static internal // that mean what function has a scope that is limited to its object file.x


int main()
{
	glfwInit();

	GLFWwindow* window = glfwCreateWindow(1000, 500, "NRG engine", 0, 0);
	if (window == NULL)
	{
		printf("Failed create GLFW window");
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	glewExperimental = GL_TRUE;
	if (glewInit() != GLEW_OK)
	{
		printf("Failed to initialize GLEW");
		return -1;
	}

	int width, height;
	glfwGetFramebufferSize(window, &width, &height);

	glViewport(0, 0, width, height);

	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
		// Draw commands here
		glClearColor(0.1f, 0.5f, 0.3f, 3.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		glfwSwapBuffers(window);
	}

	glfwTerminate();

	return 0;
}
internal void HandleKeyboard(GLFWwindow *Window) // function arg it is open gl window
{
  
  if(glfwGetKey(Window, GLFW_KEY_W) == GLFW_PRESS)
    {
      // event for W
    }
  if(glfwGetKey(Window, GLFW_KEY_A) == GLFW_PRESS)
    {
      // event  for A
    }
  if(glfwGetKey(Window, GLFW_KEY_S) == GLFW_PRESS)
    {
      // event for S
    }
  if(glfwGetKey(Window, GLFW_KEY_D) == GLFW_PRESS)
    {
      // event for D
    }
  if(glfwGetKey(Window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
    {
      // event for ecape --> i think it will close out window
    }
  if(glfwGetKey(Window, GLFW_KEY_Q) == GLFW_PRESS)
    {
      // event for Q
    }
  if(glfwGetKey(Window, GLFW_KEY_E) == GLFW_PRESS)
    {
      // event for E
    }
   
}

internal void HandleMouse(GLFWwindow *Window)
{
  // handle events for mouse
  if(glfwGetMouseButton(Window,GLFW_MOUSE_BUTTON_1) == GLFW_PRESS) // LEFT MOUSE BUTTON
    {
      // event for left mouse button
    }
  if(glfwGetMouseButton(Window,GLFW_MOUSE_BUTTON_2) == GLFW_PRESS) // RIGHT MOUSE BUTTON
    {
      // event for right mouse button
    }
  if(glfwGetMouseButton(Window,GLFW_MOUSE_BUTTON_3) == GLFW_PRESS) // MIDDLE MOUSE BUTTON
    {
      // event for middle mouse button
    }
  glfwGetCursorPos();
}

internal void proccessInput() // I think this function should determinate if it will events for mouse or keyboadr  (BUT I ALSO I THINK IT WILL VERY SLOW)
{
  if() // KEYBOARD
    {
      HandleKeyboard();
    }
  if() // MOUSE
    {
      HandleMouse();
    }
}

