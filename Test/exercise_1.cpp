/*
1. Vuvejda se cqlo polojitelno chislo
2. Vuvedenoto chislo e 4-cifreno
3. Da se oburne vuvedenoto chislo naobratno (reverse)
*/

#include <iostream>

using namespace std;

int main() {
	int num;
	cout << "Enter a four-digits number "; cin >> num;
	if(num<1000 || num > 9999)
	{
		cout << endl << "The number must have 4 digits only";
		return 1;
	}
	int reversed;
	int tmpNum = num;
	while(tmpNum != 0){
		int rem = tmpNum%10;
		reversed=reversed*10+rem;
		tmpNum/=10;
	}
	cout << endl << "The reversed number is " << reversed;
	return 0;
}
