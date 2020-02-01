#include "event.h"

typedef struct MouseButton : Event_t
{
	int x;
	int y;
	int button;
	
	static void init_mouse_button(int xx, int yy, int bb, Event_t::EventType type);	
};

typedef struct MouseMoved : Event_t {

	 int x
	 int y;
	 bool dragged;

	static void init_mouse_moved(int xx, int yy, bool dd) {
		Event_t
		
	}
}