#include <stdio.h>


void main()
{
	while (true)
	{
		extern Event* event = waitForEvent();
		dispatchEvent(event);
	}

	while (true)
	{
		processInput();
		update();
		render();
	}
}