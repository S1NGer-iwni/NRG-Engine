#include <stdio.h>
// include <GLFW3.h>
// include <GLEW.h>        --> IT WILL BE NEED FOR USING MODERN OPENGL!



#define static global_variable // static variable in the global scope
#define static local_persist // static vairable in the functin
#define static internal // that mean what function has a scope that is limited to its object file.x

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

void main()
{
  // init Opengl and create open gl Window
#if 0
  	while (true)
	{
		extern Event* event = waitForEvent();
		dispatchEvent(event);
	}

	while (true)
	{
	  processInput(); // mouse or keyboard
		update();
		render();
	}
#endif
	
}
