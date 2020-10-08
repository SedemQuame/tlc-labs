#include <iostream>

//function declarations
int addNumbers(int variable1, int variable2);

int main(){
	// get input from user.
	
	std::cout << "please enter 2 numbers: " << std::endl;
	// create variables
	int variable1 {0}, variable2 {0};


	//getting values from the user.
	std::cin >> variable1 >> variable2;

	//calling addNumbers function
	std::cout << "Result: " << addNumbers(variable1, variable2) << std::endl;
	return 0;
}

//definition
int addNumbers(int variable1, int variable2){
	return(variable1 + variable2);
}


