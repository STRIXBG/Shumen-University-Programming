#include <iostream>
#include <cmath>

using namespace std;

double hireon(double a, double b, double c){
	double s = (a+b+c)/2;
	return sqrt(s*(s-a) * (s-b) * (s-c));
}

bool check(double a, double b, double c){
	if(isnan(hireon(a,b,c))) return false;
	return true;
}

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if(!check(a,b,c)){
		cout << "You can't use these sides! INVALID NUMBER!";
	}
	else{
		cout << hireon(a,b,c);
	}
	return 0;
}
