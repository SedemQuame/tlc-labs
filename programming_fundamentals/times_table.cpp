#include<iostream>
using namespace std;
int main(){

	//get input from user.
	int number;
	
	cout << "Please enter a number: ";
	cin >> number;

	// check number state.
	if((number % 2) == 0){
		// number is even
		// producing a 20 times table for number

		for(int i = 1; i <= 20; i++){
			cout << i << " x " << number << " = " << (i*number) << endl;
		}
	}else{
		// number is odd.

		int count = 0;
		int i = 1;
		while(count != 20){
			if((i % number) != 0){
				cout << i << endl;
				count++;
			}
			i++;
		}

	}

}
