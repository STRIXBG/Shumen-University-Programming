/*
1. Programa, koqto smqta sumata na cifrite v chislo
*/
#include <iostream>
using namespace std;

long int n, number, sum=0;

int main() {
	cout << "Enter the number n: "; cin >>n;
	number = n;
	while(n!=0){
		sum += n%10;
		n /= 10;
	}
	cout << "The digits sum of " << number << " is " << sum << endl;
	return 0;
}
