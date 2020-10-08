#include <iostream>

int main(){

	int total;
	std::cout << "Enter total: ";
	std::cin >> total;


	//initialise a new pointer
	int * t_ptr = &total;
	std::cout << total << *t_ptr << std::endl;

	//increase value of variable pointed to by the pointer.
	++*t_ptr;
	std::cout << total << *t_ptr << std::endl;

	t_ptr = nullptr;
}
