#include "event.h"

typedef struct WindowEvent_t : Event_t
{
	void close();
	void onResize();
	void onMoved();
};