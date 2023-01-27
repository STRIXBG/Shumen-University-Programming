/*
1. Da se suzdade programa, koqto namira funkciqta Y
*/

#include <iostream>
#include <cmath>

using namespace std;

int firstFormula(int x){
	int result;
	result = pow(x,2) + 2*x -1;
	return result;
}

int secondFormula(int x){
	int result;
	result = pow(x,3) - pow(x,2) + 2*x;
	return result;
}

int thirdFormula(int x){
	int result;
	result = pow(2*x,3) - pow(3*x,2) + 2*x;
	return result;
}

int main() {
	int y, x;
	cout << "Enter value of x  "; cin >> x;
	if(-1 > x){
		y = firstFormula(x);
	}
	else if(-1 < x <= 2){
		y = secondFormula(x);
	}
	else if(x > 2){
		y = thirdFormula(x);
	}
	cout << endl << "The result is  " << y;
	return 0;
}
