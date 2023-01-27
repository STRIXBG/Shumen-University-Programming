#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double solve(double x){
	double y;
	if(x <= 1){
		y = pow(x,2);
		y += 2*x;
		y -= 2;
	}
	else if(x > 1 && x <= 4){
		y = pow(-x,2);
		y += 5*x;
		y += 2;
	}
	else if(x > 4){
		y = 2*pow(x,2);
		y -= 3*x;
		y -= 5;
	}
	return y;
}

main() 
{ 
	double xValue;
	cout << "Въведете x: "; cin >> xValue;
	cout << "Резултат: " << setw(10) << fixed << setprecision(2) << solve(xValue) << '\n';
	return 0;
}
