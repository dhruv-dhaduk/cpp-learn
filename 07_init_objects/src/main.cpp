#include <iostream>

#define log(x) std::cout << x << std::endl;

class Entity {
private:
	const std::string m_Name;

public:
	Entity() : m_Name("Entity") {};

	Entity(const std::string& name) : m_Name(name) {};

	const std::string& getName() const {
		return m_Name;
	}
};

int main() {
    Entity* e_stack;
    Entity* e_heap;

    {
        Entity ent_stack = Entity("Cherno Stack");
        Entity* ent_heap = new Entity("Cherno Heap");

        log(ent_stack.getName());
        log(ent_heap->getName());
        log(&ent_stack);
        log(ent_heap);

        e_stack = &ent_stack;
        e_heap = ent_heap;
        // delete ent_heap;
    }
    {
        Entity ent_stack = Entity("Cherno Stack 2");
        Entity* ent_heap = new Entity("Cherno Heap 2");

        log(&ent_stack);
        log(ent_heap);
    }
    
    log(e_stack->getName());
    log(e_heap->getName());

    return 0;
}
