/*
1. Vuvejdat se celi polojitelni chisla
2. Vuvejdaneto e do input ot -1 ili dokato sumata previshi 120
3. V kraq na programata da se izvede sumata
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int num, sum;
	cout << "Enter numbers below:" << endl;
	do{
		cin >> num;
		if(num != -1) sum += num;
	}
	while(num != -1 && sum < 120);
	cout << "The sum of all entered numbers is: " << sum;
	return 0;
}
