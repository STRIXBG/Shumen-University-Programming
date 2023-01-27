#include <iostream>

using namespace std;

int main() {
	int num;
	int evens, odds;
	cout << "Enter a number: "; cin >> num;
	while(num != 0){
		cout << endl << "Enter the next num: ";
		cin >> num;
		if(num % 2 == 0) evens++;
		else if(num % 2 != 0) odds++;
	}
	cout << endl << "Evens: " << evens << endl;
	cout << "Odds: " << odds;
	return 0;
}
