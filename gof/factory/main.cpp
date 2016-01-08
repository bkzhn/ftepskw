#include <iostream>
using namespace std;

#include "computer.h"

int main() {
	Computer* computer = ComputerFactory::newComputer("laptop");
	computer->run();
	
	computer = ComputerFactory::newComputer("desktop");
	computer->run();
	
	return 0;
}
