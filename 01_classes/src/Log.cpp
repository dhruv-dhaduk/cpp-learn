#include "Log.h"
#include <iostream>

Log::Log()
	: m_Level(Log::LevelInfo) 
{
	std::cout << std::endl;
	std::cout << "============== Logs Start ==============" << std::endl;
	std::cout << std::endl;
}

Log::Log(Log::Level level)
	: m_Level(level)
{ 
	std::cout << std::endl;
	std::cout << "============== Logs Start ==============" << std::endl;
	std::cout << std::endl;
}

Log::~Log() {
	std::cout << std::endl;
	std::cout << "=============== Logs End ===============" << std::endl;
	std::cout << std::endl;
}

void Log::setLogLevel(Log::Level level) {
	m_Level = level;
}

void Log::Error(const char* message) {
	if (m_Level >= Log::LevelError)
		std::cout << "[ERROR] " << message << std::endl;
}

void Log::Warn(const char* message) {
	if (m_Level >= Log::LevelWarning)
		std::cout << "[WARNING] " << message << std::endl;
}

void Log::Info(const char* message) {
	if (m_Level >= Log::LevelInfo)
		std::cout << "[INFO] " << message << std::endl;
}

void Log::fn() {
	std::cout << "[This is Log class]" << std::endl;
}
