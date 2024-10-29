#include <iostream>

#define log(x) std::cout << x << std::endl;

class Entity {
private:
	const int m_X, m_Y;
	const int* ptrX;	

public:	
	Entity() 
		: m_X(0), m_Y(0), ptrX(&m_X) {}

	Entity(int x, int y)
		: m_X(x), m_Y(y), ptrX(&m_X) {}

	int getX() const {
		return m_X;
	}

	int getY() const {
		return m_Y;
	}

	const int* const getPtrX() const {
		return ptrX;
	}
	
	void nonConstMethod() {}
};

void PrintEntity(const Entity& e) {
	log("Entity : ");
	log("	x -> " << e.getX());
	log("	y -> " << e.getY());
	log("	ptrX -> " << e.getPtrX());
	// e.nonConstMethod(); // This will give error.
}

int main() {

	const int a = 500;

	int* p = (int*)&a;
	*p = 200; // unexpected behavior

	// int num = 5252;
	// const int* const ptr = &num;
	// *ptr = 1221; // Error when const int* ptr
	// ptr = new int; // Error when int* const ptr

	Entity e(500, 200);
	PrintEntity(e);	
	int* ptrX = (int*)e.getPtrX();
	*ptrX = 1000;
	ptrX = new int;
	PrintEntity(e);	

    return 0;
}
