#include <iostream>

int main(){
	// reading an int with error checking
	int i;
	while (std::cin >> i, !std::cin) {
		std::cin.clear();
		std::cin.ignore(256, '\n');
	}
	std::cout << i;
}
