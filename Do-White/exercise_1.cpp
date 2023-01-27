#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a, S;
	do{
		cout << "Enter a number"; cin >> a;
		S+=a;
	}
	while(a!=0);
	cout << endl << "The sum of entered nums is " << S << endl;
	return 0;
}
