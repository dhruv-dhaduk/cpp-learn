#include <iostream> 

class Printable {
public:
	virtual std::string getClassName() = 0;
};

class Entity : public Printable {
public:
	virtual std::string getName() {
		return "Entity";
	}

	std::string getClassName() override {
		return "Entity";
	}
};

class Player : public Entity {
public:
	std::string name;

	Player() {
		name = "Player";
	}

	Player(std::string newName) {
		name = newName; 
	}	

	std::string getName() override {
		return name;
	}

	std::string getClassName() override {
		return "Player";
	}	

};

void printName(Entity* e) {
	std::cout << "[NAME]: " << e->getName() << std::endl;
}

void printClassName(Printable* pr) {
	std::cout << "[CLASS]: " <<  pr->getClassName() << std::endl;
}

int main() {

	Entity* e = new Entity();
	printName(e);
	printClassName(e);

	std::cout << std::endl;

	Player* p = new Player("Cherno");
	printName(p);
	printClassName(p);

    return 0;
}
