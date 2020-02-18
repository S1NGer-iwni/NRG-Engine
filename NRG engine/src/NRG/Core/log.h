#pragma once

#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

template<typename T>
using Ref = std::shared_ptr<T>;
	class Log
	{
	public:
		static void Init();

		inline static Ref<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static Ref<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static Ref<spdlog::logger> s_CoreLogger;
		static Ref<spdlog::logger> s_ClientLogger;
	};

// Core log macros
#define NRG_CORE_TRACE(...)    Log::GetCoreLogger()->trace(__VA_ARGS__)
#define NRG_CORE_INFO(...)     Log::GetCoreLogger()->info(__VA_ARGS__)
#define NRG_CORE_WARN(...)     Log::GetCoreLogger()->warn(__VA_ARGS__)
#define NRG_CORE_ERROR(...)    Log::GetCoreLogger()->error(__VA_ARGS__)
#define NRG_CORE_CRITICAL(...) Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define NRG_TRACE(...)         Log::GetClientLogger()->trace(__VA_ARGS__)
#define NRG_INFO(...)          Log::GetClientLogger()->info(__VA_ARGS__)
#define NRG_WARN(...)          Log::GetClientLogger()->warn(__VA_ARGS__)
#define NRG_ERROR(...)         Log::GetClientLogger()->error(__VA_ARGS__)
#define NRG_CRITICAL(...)      Log::GetClientLogger()->critical(__VA_ARGS__)