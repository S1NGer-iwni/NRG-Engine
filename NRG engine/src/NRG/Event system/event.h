#include <stdio.h>

typedef struct Event_t
{
	enum EventType
	{											 
		MousePressed, MouseReleased, MouseMoved, MouseScrolled,
		KeyPressed, KeyReleased,
		WindowClose, WindowResize, WindowMoved
	};

	EventType eventType;

	bool handled;

	void event_type(EventType type)
	{
		type = eventType;
	}

	void init_event(EventType type)
	{
		eventType = type;
	}
	
};

typedef struct EventHandler_t
{
	bool OnEvent(Event_t event);
};