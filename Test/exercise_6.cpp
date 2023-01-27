/*
1. Namira sumata na celi chisla vuvedeni ot keyboard
2. Vuvejdat se chisla dokato ne bude vkaran simvol
3. V kraq na programata da bude izpisana sumata na chislata
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "Enter numbers or a symbol below: " << endl;
	char inputCh;
	int sum;
	while(true){
		int num;
		cin >> inputCh;
		if(inputCh >= '0' && inputCh <= '9'){
			num = inputCh - '0'; 
			sum += num;
			
		}
		else{
			break;
		}
	}
	cout << endl << "End of the program";
	cout << endl << "The sum of all entered numbers is: " << sum;
	return 0;
}
