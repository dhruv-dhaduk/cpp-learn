#include <iostream>

#define log(x) std::cout << x << std::endl;

class Entity {
private:
	const std::string m_Name;
    const int i;

public:
	Entity() : m_Name("Unknown"), i(0) {
        log("Default Constructor of Entity Called.");
    };

	Entity(const std::string& name, int i) : m_Name(name), i(i) {
        log("Constructor of Entity Called. name : " << name << " & i = " << i);
    };

	const std::string& getName() const {
		return m_Name;
	}

    int getI() const {
        return i;
    }
};

int main() {
    int a[10];
    Entity* obj_without_constructor_called = (Entity*)a;

    Entity* e = new Entity("Cherno", 100);

    Entity* es = new Entity[5];

    for (int i = 0; i < 5; i++) {
        log(&es[i]);
    }

    delete[] es;

    return 0;
}
