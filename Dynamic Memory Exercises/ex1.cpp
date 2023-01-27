#include <iostream>

using namespace std;

int main() {
	int *a = new int;
	cin >> *a;
	double *b = new double;
	cin >> *b;
	char *c = new char;
	cin >> *c;
	cout << endl << *a << " " << *b << " " << *c;
	return 0;
}
