#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int length {5};
    int numbers [length] {};

    // create loop to, populate numbers array.
    for(int i = 0; i < length; i++){
        cout << "Please enter a number: ";
        cin >> numbers[i];
    }

    // getting the mean of number in the array.
    int sum {0};
    for(int i = 0; i < length; i++){
        sum += numbers[i];
    }

    cout << "Mean of numbers entered: ";
    cout << (sum/length);
    cout << "" << endl;

    // getting the median of numbers in the array.
    int medianPosition {(length + 1) / 2};

    cout << "Median position: " << medianPosition << endl;
    
    // sorting the array.
    sort(numbers, numbers + length);
    cout << "Median: " << numbers[medianPosition -1 ] << endl;
    // 

    // finding the mode
    // the mode is the most reocurring number.
    int mode = numbers[0]; // assume the first element in the array is the mode.
    int modeCount = 1;
    int numberCount = 1;
    // traverse through the array and compare number counts 
    // sequentially and determine the mode number.
    
    for(int j = 1; j < length; j++){
	if(mode == numbers[j]){
		modeCount++; //increment the modeCount of the assumed mode number.
	}else{
		if(numberCount > modeCount){
			modeCount = numberCount;
			mode = numbers[j];
		}
		numberCount = 1;
	}

    }


    cout << "Mode number is: " << mode << endl;


    return 0;
}

