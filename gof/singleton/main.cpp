#include <iostream>
using namespace std;

#include "singleton.h"

int main() {
	Singleton *s1 = Singleton::getInstance();
	Singleton *s2 = Singleton::getInstance();
	return 0;
}
