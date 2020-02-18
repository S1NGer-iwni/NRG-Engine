#pragma once

#include <imgui.h>
#include <examples/imgui_impl_glfw.h>
#include <examples/imgui_impl_opengl3.h>

struct ImGuiImpl
{
	inline void imgui_init();
	inline void imgui_clear();
};
