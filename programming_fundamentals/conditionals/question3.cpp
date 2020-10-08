#include <iostream>
#include <vector>

int main() {
	
	std::vector<char> inputTrain;
	char c;
	while(true){
		std::cin.get(c);
		//std::cout.put(c);
		inputTrain.push_back(c);
		for(int j = 0; j < inputTrain.size(); j++){
			std::cout << inputTrain.at(j);
		}
		std::cout << "" <<std::endl;
	}

	return 0;
}
