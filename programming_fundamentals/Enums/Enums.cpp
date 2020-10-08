#include <iostream>

int main(){

	enum Lights {RED, YELLOW, AMBER = YELLOW, GREEN};

	std::cout << "Favourite colour: " << AMBER << std::endl ;
}
