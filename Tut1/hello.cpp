// John Poole, CM3, 25/02/2015
// My first C++ program (Hello, World!)
#include <iostream>
#include <string>

int main() {
	std::string myName;

	std::cout << "Please enter your name: ";
	std::cin >> myName;
	std::cout << "Hello, " + myName << std::endl;
}