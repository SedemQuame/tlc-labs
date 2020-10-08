#include <iostream>

int main(){
	std::cout << "Input a number greater than 10: ";
	int number;
	std::cin >> number;

	while(number <= 10){
		std::cout << "Incorrect, please try again: ";
		std::cin >> number;
	}

	std::cout << "Correct, thank you" << std::endl;
}
