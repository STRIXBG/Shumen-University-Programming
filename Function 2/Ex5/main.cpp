#include <iostream>

#define MATH_PI 3.14

using namespace std;

int findS(int r){
	return MATH_PI*(r^2);
}

int returnPrismVolume(int S, int h){
	return S*h;
}

int main() {
	int h = 4,r = 2;
	cout << "Enter height: " << endl; cin >> h;
	cout << "Enter radius: " << endl; cin >> r;
	int S = findS(r);
	cout << "V of prisma is: " << returnPrismVolume(S, h) << endl;
	return 0;
}
