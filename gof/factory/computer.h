#include <string>

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
