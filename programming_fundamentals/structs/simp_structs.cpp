#include <cstring>
#include <iostream>

struct CarData {
	char regNo[8];
	char model[30];
	int year;
	float mileage;
};

int main(){
	//Create new structure.
	CarData mine, yours;

	mine.year = 2030;

	strcpy(mine.model, "Land Rover");

	yours = mine;

	std::cout << mine << std::endl;
}
