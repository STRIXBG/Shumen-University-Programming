#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Bulgarian");
	int sum;
	do{
	int num;
	cout << endl << "Enter a number: "; cin >> num;
	sum += num;
	} while(sum < 1000);
	cout << endl << "The sum is: " << sum;
	return 0;
}
