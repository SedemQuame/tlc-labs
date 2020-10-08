#include <iostream>
#include <string>
#include <cstddef>
#include <cstring>

using namespace std;

int main(){
	string str = "";
	cout << "Enter a word: " << endl;
	cin >> str;

	string longestSubString = "", currentSubString = "";
	int subStringLength = 0;
	string delimiter = " ";

	while(true){
		// go looking for spaces.
		size_t delimiterPosition = str.find(delimiter);	

		cout << delimiterPosition << endl;
		
		currentSubString = str.substr(0, delimiterPosition);

		if(currentSubString.length() > longestSubString.length()){
			longestSubString = currentSubString;
		}

		cout << "Current str: " << currentSubString.length() << endl;
		cout << "Longest str: " << longestSubString << endl;

		currentSubString = "";

		str = str.erase(0, currentSubString.length());

		cout << str.erase(0, currentSubString.length()) << endl;

		if(str == ""){
			break;
		}
	}

	cout << longestSubString << endl;

	return 0;
}

int findDelimiter(string str){
	for(int i = 0; str.length(); i++){
		if(str[i] == ' '){
			return i;
		}
	}
}






