#pragma once
#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include <spdlog/fmt/ostr.h>
namespace Pikachu {
	class PIKACHU_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}
//Core Log macros
#define PK_CORE_TRACE(...) :: Pikachu::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define PK_CORE_INFO(...)  :: Pikachu::Log::GetCoreLogger()->info(__VA_ARGS__)
#define PK_CORE_WARN(...)  :: Pikachu::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define PK_CORE_ERROR(...) :: Pikachu::Log::GetCoreLogger()->error(__VA_ARGS__)
#define PK_CORE_FATAL(...) :: Pikachu::Log::GetCoreLogger()->fatal(__VA_ARGS__)                                                                                                                 
//Client log macros
#define PK_TRACE(...)  :: Pikachu::Log::GetClientLogger()->trace(__VA_ARGS__)
#define PK_INFO(...)   :: Pikachu::Log::GetClientLogger()->info(__VA_ARGS__)
#define PK_WARN(...)   :: Pikachu::Log::GetClientLogger()->warn(__VA_ARGS__)
#define PK_ERROR(...)  :: Pikachu::Log::GetClientLogger()->error(__VA_ARGS__)
#define PK_FATAL(...)  :: Pikachu::Log::GetClientLogger()->fatal(__VA_ARGS__)





