#include <iostream> 

class A {
public:
	static const int count = 10;
	int arr[count];
};

class Ints {
	int length;
	int* arr;
	Ints() = delete;
	
public:
	Ints(int l) {
		length = l;
		arr = new int[length];
		for (int i = 0; i < length; i++) {
			arr[i] = 0;
		}
	}

	~Ints() {
		delete[] arr;
	}

	int getLength() {
		return length;
	}

	int get(int i) {
		return arr[i];
	}

	void set(int i, int value) {
		arr[i] = value;
	}

	void print() {
		for (int i = 0; i < length; i++) {
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}
	
};

int main() {
	Ints nums(10);

	for (int i = 0; i < nums.getLength(); i++) {
		nums.set(i, (i + 1) * (i + 1));
	}

	nums.print();

    return 0;
}
