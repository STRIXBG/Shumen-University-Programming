#include <iostream>

using namespace std;

int main() {
	int *a = new int;
	cin >> *a;
	double *b = new double;
	cin >> *b;
	char *c = new char;
	cin >> *c;
	//Pointers
	int * ptr1 = a;
	double * ptr2 = b;
	char * ptr3 = c;
	cout << endl << *ptr1 << " " << *ptr2 << " " << *ptr3;
	return 0;
}
