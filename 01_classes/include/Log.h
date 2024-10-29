#pragma once

class Log {

public:
	enum Level {
		LevelError = 0,
		LevelWarning = 1,
		LevelInfo = 2
	};

private:
	Level m_Level = LevelWarning;

public:
	Log();
	Log(Level level);
	~Log();

	void setLogLevel(Level level);
	void Error(const char* message);
	void Warn(const char* message);
	void Info(const char* message);
	
	static void fn();
};
