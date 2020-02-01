#include "event.h"

typedef struct MouseButton_t : Event_t
{
	int x;
	int y;
	int button;
	
	void init_mouse_button(int xx, int yy, int bb, Event_t::EventType type)
	{
		init_event(type);
		x = xx;
		y = yy;
		button = bb;
	}
};

typedef struct MouseMoved_t : Event_t {

	int x;
	int y;
	bool dragged;

	void init_mouse_moved(int xx, int yy, bool dd) {
		init_event(Event_t::EventType::MouseMoved);
		x = xx;
		y = yy;
		dragged = dd;
	}
};

typedef struct MousePressed_t : MouseButton_t
{
	void init_mouse_pressed(int x, int y, int button)
	{
		MouseButton_t::init_mouse_button(x, y, button, EventType::MousePressed);
	}
};

typedef struct MouseReleased_t : MouseButton_t
{
	void init_mouse_released(int x, int y, int button)
	{
		MouseButton_t::init_mouse_button(x, y, button, EventType::MouseReleased);
	}
};

typedef struct EventDispatcher_t
{
	Event_t event;

	void init_dispatcher(Event_t e)
	{
		event = e;
	}

	void dispatch(Event_t::EventType type, EventHandler_t handler)
	{
		if (event.handled) return;

		if (event.eventType = type)
		{
			event.handled = handler.OnEvent(event);
		}
	}	
};