#include <iostream>
#include <cstring>
#include <string>

namespace my{
//function definitions
	//string compare
	int strcmp(const char *l, const char *r);

	//string length
	int strlen(const char *s);

	//string concatenate
	char *strcat(char *l, const char *r);

	//string copy
	char *strcpy(char *l, const char *r);

	char *toupper(char *s);

//function declaration
	int strcmp(const char *l, const char *r){
		//assumption,  both character arrays are equal then, length should be equal.
		for(int i = 0; i < my::strlen(l); i++){
			//comparing string values.
			if(int(l[i]) == int(r[i])){
				continue;
			}else{
				break;
			}
		}
		//todo compare all characters in an array of equal val.
		return 0;
	}

	int strlen(const char *s){
		int count = 0;
		for(; s[count] != '\0';){
			count++;
		}
		return count;
	}

	char * strcat(char *l, const char *r){
		int lArrSize = my::strlen(l);
		int rArrSize = my::strlen(r);

		//extend arr.
		for(int i = 0; i < rArrSize; i++){
			l[lArrSize + i] = r[i];
		}
		return l;
	}

	char *strcpy(char *l, const char *r){
		//get length of *r
		int arrSize = 0;
		for(; r[arrSize] != '\0';){
			arrSize++;
		}	

		//copy individual elements.
		for(int i=0; i < arrSize; i++){
			l[i] = r[i];
		}
		return l;
	}

	char *toupper(char *s){
		char * sv = s;
		while(*sv++ != '\0'){
			if(int(*sv) >= 97 && int(*s) <= 122){
				*sv = char(*sv -32);	
			}
		}	
		return s;
	}
}

int main(){
	std::string val = "Value";
	char * charArr = new char[val.length() + 1];
	strcpy(charArr, val.c_str());
	std::cout << "String length: " << my::strlen(charArr) << std::endl;
	
	//create array to copy to.
	char * str2Copy = new char[100];
	std::cout << "Copying string: " << my::strcpy(str2Copy, charArr) << std::endl;

	//create array to concatenate to.
	char * arrToConcatenateTo = new char[100];
	// add some dummy values to array to see effect of concatenation
	std::string simple = "Simplicity is, ";
	my::strcpy(arrToConcatenateTo, simple.c_str());

	//validating concatenation functions.
	char * simpleArr = new char[val.length() + 1];
	my::strcpy(simpleArr, val.c_str());
	std::cout << "After concatenation: " << my::strcat(arrToConcatenateTo, simpleArr) << std::endl;

	//converting string to uppercase.
	std::cout << "After string conversion: " << my::toupper(arrToConcatenateTo) << std::endl;
	
	//comparing the two strings.
	my::strcmp(str2Copy, charArr);
	return 0;
}
