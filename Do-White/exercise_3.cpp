#include <iostream>

using namespace std;

int main() {
	int num;
	cout << "Enter the first num: ";
	cin >> num;
	int smallest = num;
	while(num != 0){
		cout << endl << "Enter the next num: ";
		cin >> num;
		if(num != 0 && num < smallest) smallest = num;
	}
	cout << "The Smallest number is: " << smallest;
	return 0;
}
