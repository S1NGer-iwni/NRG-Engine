#pragma once

#include <imgui.h>
#include <examples/imgui_impl_glfw.h>
#include <examples/imgui_impl_opengl3.h>

typedef struct ImGuiImpl
{
	inline void imgui_init();
	inline void imgui_settings(bool show_demo_window, ImVec4 clear_color);
	inline void imgui_render();
	inline void imgui_clear();
};
