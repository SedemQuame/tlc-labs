#include <iostream>
#include <iomanip>

int main(){
	char buffer[256];

	// read white-space delimited word
	std::cin >> buffer;

	// // as above with buffer overflow check
	// std::cin >> std::setw(256) >> buffer;

	// // reads until buffer full or delimiter found or end-of-file
	// std::cin.getline(buffer, sizeof(buffer));
}
