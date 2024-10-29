#include <iostream>
#define log(x) std::cout << x << std::endl;
#define String std::string

using namespace std::string_literals;

class Entity {
private:
    const String m_Name;
    const int m_Age;

public:
    Entity()
        : m_Name("Unknown"), m_Age(-1) {}
    
    Entity(const String& name)
        : m_Name(name), m_Age(-1) {}

    explicit Entity(int age)
        : m_Name("Unknown"), m_Age(age) {}

    Entity(const String& name, int age)
        : m_Name(name), m_Age(age) {}
    
    const String& getName() const {
        return m_Name;
    }

    int getAge() const {
        return m_Age;
    }

};

void PrintEntity(const Entity& e) {
    log("Name : " << e.getName() << " & Age : " << e.getAge());
}

int main() {
    PrintEntity("Cherno"s); // Fine.
    // PrintEntity(22); // Error. Because "explicit" keyword is used before constructor.
    
    // Entity e1 = "Cherno"; // Error. Because two implicit conversions are needed.
    Entity e2 = "Cherno"s; // Fine.
    // Entity e3 = 22; // Error. Because "explicit" keyword is used before constructor.

    return 0;
}
