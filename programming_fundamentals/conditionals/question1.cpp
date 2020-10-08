#include <iostream>
#include <vector>

int main(){
	
	std::vector<char>input_line {'d', 'e', '?'};
	int max_length = input_line.size();
	int count = 0, i = 0;

	while(i < max_length){
		if(input_line.at(i) == '?'){
			++count;
			std::cout << "Just hit on '?', she pretty cool ... lol " << std::endl;
		}
		++i;
		std::cout << "Bruh, i didn't hit '?', feeling .. meh ~~ " << std::endl;
	}

}
