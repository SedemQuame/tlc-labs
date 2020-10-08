#include <iostream>
#include <cstring>
#include <string>

int main(){
	//get input from user.
	std::cout << "Please enter word: ";
	std::string str {""};
	getline(std::cin, str);

//	std::cin >> str;

	//convert std::string to intrinsic character array.
	//create character array
	char * c_array = new char[str.length()];

	//convert string to c_str and copy string into c_array.
	strcpy(c_array, str.c_str());
	
	//iterate through, c_str array and print value of each character.
	for (int i = 0; i < str.length(); i++){
		std::cout << c_array[i] << std::endl;
	}
	return 0;
}
