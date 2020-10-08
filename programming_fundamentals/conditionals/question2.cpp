#include <iostream>

// function prototypes.
void checkOperatorAndCalculate(char _operator, int operand1, int operand2);

// calculator functions.
// addition
int addition(int operand1, int operand2);

//substraction
int substraction(int operand1, int operand2);

//multiplication
int multiplication(int operand1, int operand2);

//division
int division(int operand1, int operand2);


int main(){
	while(true){
		// get user input.
		std::cout << "Please input two operands: ";
		int operand1 = 0, operand2 = 0;
		std::cin >> operand1 >> operand2;

		// get operator from user.
		std::cout << "Please enter an operator: ";
		char _operator;
		std::cin >> _operator;
	
		// perform checks and calculate.
		checkOperatorAndCalculate(_operator, operand1, operand2);
		std::cout << "/n";

	}
	return 0;

}

void checkOperatorAndCalculate(char _operator, int operand1, int operand2){
	switch(_operator){
		case '+':
			std::cout << "Adding " << operand1 << " + " << operand2 << " = " << addition(operand1, operand2) << std::endl; 
			break;
		case '-':
			std::cout << "Substracting " << operand1 << " - " << operand2 << " = " << substraction(operand1, operand2) << std::endl;
			break;
		case '*':
			std::cout << "Multiplying " << operand1 << " * " << operand2 << " = " << multiplication(operand1, operand2) << std::endl ;
			break;
		case '/':
			std::cout << "Division " << operand1 << " / " << operand2 << " = " <<  division(operand1, operand2) << std::endl ;
			break;
		default:
			std::cout << "Operator not recognized by program :( sorry !!" << std::endl;
	
	}
}

int addition(int operand1, int operand2){
	return (operand1 + operand2);
}

int substraction(int operand1, int operand2){
	return(operand1 - operand2);
}

int multiplication(int operand1, int operand2){
	return(operand1 * operand2);
}

int division(int operand1, int operand2){
	return(operand1/operand2);
}
