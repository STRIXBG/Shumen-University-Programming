#include <iostream>

using namespace std;

int displayNum = 1;

void checkDisplayNumber(){
	if(displayNum > 9) displayNum = 1;
}

int main() {
	int length;
	cout << "Enter the length of the rectagle: ";
	cin >> length;
	if(length < 5) {
		cout << "The length must be minimum 5 symbols!";
		return 1;
	}
	//Clear Console
	for(int i=0; i<20; i++) cout << endl;
	//Print the result
	int lengthDecreased = length-2;
	for(int i=0; i<length; i++) {
		cout << displayNum;
		displayNum++;  checkDisplayNumber();
	}
	displayNum=1;
	cout << endl;
	for(int i=0; i<lengthDecreased; i++){
		cout << displayNum;
		for(int i=0; i<lengthDecreased; i++) cout << '\0';
		cout << displayNum;
		cout << endl;
		displayNum++; checkDisplayNumber();
	}
	displayNum=1;
	for(int i=0; i<length; i++) {
		cout << displayNum;
		displayNum++;  checkDisplayNumber();
	}
	return 0;
}
