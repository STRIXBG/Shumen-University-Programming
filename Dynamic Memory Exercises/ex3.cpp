#include <iostream>

using namespace std;

int main() {
	int size;
	cout << "Enter size of array: ";
	cin >> size;
	double *array = new double[size];
	for(int i=0; i<size; i++){
		cin >> array[i];
	}
	double * pointer;
	pointer = array;
	for(int i=0; i<size; i++){
		cout << *(pointer + i) << " ";
	}
	
	delete array;
	delete[] array;
	return 0;
}
