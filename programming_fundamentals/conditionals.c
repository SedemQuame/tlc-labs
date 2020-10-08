#include <iostream>

int main(){
	std::cout << "Input a number greater than 10. ";
	int number;
	std::cin >> number;

	if(number > 10){
		std::cout << "Correct, thank you.";
	}else{
		std::cout << "Sorry, you're fired!";
	}
}
