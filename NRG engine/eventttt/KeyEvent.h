#include "event.h"

typedef struct KeyButton_t : Event_t
{
	int key;

	void init_key_button(int k, Event_t::EventType type)
	{
		init_event(type);
		key = k;
	}
};

typedef struct KeyPressed_t : KeyButton_t
{
	void init_key_pressed(int key)
	{
		KeyButton_t::init_key_button(key, EventType::KeyPressed);
	}
};

typedef struct KeyReleased_t : KeyButton_t
{
	void init_key_released(int key)
	{
		KeyButton_t::init_key_button(key, EventType::KeyReleased);
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