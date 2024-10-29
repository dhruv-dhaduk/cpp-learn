#include <iostream>
#define log(x) std::cout << x << std::endl;

class Entity {
private:
	const std::string m_Name;
	mutable int m_DebugCount = 0;

public:
	Entity() : m_Name("Entity") {};

	Entity(const std::string& name) : m_Name(name) {};

	const std::string& getName() const {
		m_DebugCount++;
		return m_Name;
	}
};

int main() {
	const Entity e("Cherno");
	const std::string& name = e.getName();		
	log(name);

    return 0;
}
