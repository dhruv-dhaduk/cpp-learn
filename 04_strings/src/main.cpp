#include <iostream>

int main() {

	const char s1[] = "Cherno C++";
	const char* s2 = "Cherno C++";
	char s3[] = "Cherno C++";
	char* s4 = "Cherno C++"; // Compiler Warning : ISO C++ forbids converting a string constant to char*

	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	std::cout << s3 << std::endl;
	std::cout << s4 << std::endl;

	std::cout << sizeof(s1) << std::endl;
	std::cout << sizeof(s2) << std::endl;
	std::cout << sizeof(s3) << std::endl;
	std::cout << sizeof(s4) << std::endl;

	// s1[2] = 'a'; // Compiler Error : assignment of read-only location
	// s2[2] = 'a'; // Compiler Error : assignment of read-only location
	s3[2] = 'a'; // Fine
	// s4[2] = 'a'; // It will give segmentation fault

	std::string str1 = std::string("Cherno") + " C++";
	using namespace std::string_literals;
	std::string str2 = "Cherno"s + " C++";

	std::cout << str1 << std::endl;
	std::cout << str2 << std::endl;

    return 0;
}
