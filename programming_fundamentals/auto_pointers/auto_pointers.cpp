#include <iostream>

int main(){

	int i = 5;
	int &ir = i; // creates an automatic pointer that always references the value of the i variable.

	std::cout << " i: " << i << std::endl << " ir: " << ir << std::endl;

	//increment the value of i by 1
	++i;

	std::cout << " i: " << i << std::endl << " ir: " << ir << std::endl;
}
