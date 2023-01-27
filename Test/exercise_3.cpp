/*
1. Da se izchisli funkciqta Y pri 4 sluchaq
2. Potrebitelqt izbira koq funkciq da izpolzva
3. x se vuvejda ot potrebitelq
*/

#include <iostream>
#include <cmath>

using namespace std;


int solve(int x, int option){
	int result;
	switch(option)
	{
		case 1:
		{
			result = sqrt(3*x);
			break;
		}
		case 2:
		{
			result = cbrt(2*x);
			break;
		}
		case 3:
		{
			result = cos(x);
			break;
		}
		case 4:
		{
			result = pow(x,3)+(x-3);
			break;
		}
	}
	
	return result;
}

int main() {
	int x, option;
	cout << "Enter the value of x: "; cin >> x;
	cout << endl << "Select a function Use the keyboard to select an option ";
	cout << endl << endl;
	cout << "The options are between 1 and 4: "; cin >> option;
	cout << endl << "The result of option:  " << option <<" is >> " << solve(x, option);
	return 0;
}
