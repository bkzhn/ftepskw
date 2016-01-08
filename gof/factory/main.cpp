#include <iostream>
#include <string>

using namespace std;

class Computer {
public:
	virtual void run() {
		cout << "It is a Computer\n";
	}
};

class Laptop : public Computer {
public:
	virtual void run() {
		cout << "It is a Laptop\n";
	}
};

class Desktop : public Computer {
public:
	virtual void run() {
		cout << "It is a Desktop\n";
	}
};

class ComputerFactory {
public:
	static Computer *newComputer(const string &name) {
		if (name == "laptop")
			return new Laptop();
		if (name == "desktop")
			return new Desktop();
		return NULL;
	}
};


int main() {
	Computer* computer = ComputerFactory::newComputer("laptop");
	computer->run();
	
	computer = ComputerFactory::newComputer("desktop");
	computer->run();
	
	return 0;
}
