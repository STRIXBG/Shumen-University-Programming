#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Bulgarian");
	int num, sum;
	do{
	cout << endl << "Enter a number: "; cin >> num;
	if(num != 1) sum += num;
	} while(num != 1);
	cout << endl << "The sum is: " << sum;
	return 0;
}
