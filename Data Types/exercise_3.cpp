/*
1. vuvejda se cqlo polojitelno chislo
2. otpechatva chisloto na obratno (ogledalno)
*/
#include <iostream>
using namespace std;

int main() {
	int number, reverse, rem;
	cout << "Enter the number: "; cin >> number;
	while(number !=0){
		rem=number%10;      
     	reverse=reverse*10+rem;    
     	number/=10;    
	}
	cout << "The result is: " << reverse;
	return 0;
}
