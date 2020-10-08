#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	char str[100];
	std::cout << "Please enter a line of text." << std::endl;
	std::cin.get(str, 100);

	std::cout << str << std::endl;
	
	// reverse string
	for(int i = str.size(); i <= 0; i--){
	std::cout << str[i];
	}
	

	

	return 0;
}
