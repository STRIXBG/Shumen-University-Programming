#include <iostream>

using namespace std;

int main() {
	int num;
	cout << "Enter the first num: ";
	cin >> num;
	int biggest = num;
	while(num != 0){
		cout << endl << "Enter the next num: ";
		cin >> num;
		if(num > biggest) biggest = num;
	}
	cout << "The Biggest number is: " << biggest;
	return 0;
}
