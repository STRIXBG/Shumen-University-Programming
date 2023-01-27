/*
Namirane na GCD
*/
#include <iostream>
using namespace std;

int main(){
	int num1, num2, GCD;
	cout << "Enter first num: "; cin >> num1;
	cout << "Enter second num: "; cin >> num2;
	
	if(num2>num1){
		int tmp = num2;
		num2 = num1;
		num1 = tmp;
	}
	
	for (int i = 1; i <=  num2; ++i) 
	{
	    if (num1 % i == 0 && num2 % i ==0) 
		{
	      GCD = i;
	 	}
	}
	
	cout << endl << "GCD is " << GCD;
	return 0;
}
