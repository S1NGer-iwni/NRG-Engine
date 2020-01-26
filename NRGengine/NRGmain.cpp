#include <stdio.h>


void main()
{
	while (true)
	{
	  extern Event* event = waitForEvent(); // get event
	  dispatchEvent(event); // handle this event
	}

	while (true)
	{
	  processInput();
		update();
		render();
	}
	// How mush our engine will
}
