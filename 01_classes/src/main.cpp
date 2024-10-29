#include "Log.h"
#include <iostream>

void logs() {
	Log log(Log::LevelWarning);

	log.Info("This is an Info.");
	log.Warn("This is a Warning.");
	log.Error("This is an Error.");
}

int main() {

	std::cout << "Start of main function" << std::endl;	

	logs();

	std::cout << "End of main function" << std::endl;

	return 0;
}
