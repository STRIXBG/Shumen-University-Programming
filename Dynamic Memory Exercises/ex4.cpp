#include <iostream>

using namespace std;

void enterInput(int size, double * array){
	for(int i=0; i<size; i++){
		cin >> array[i];
	}
}

void output(int size, double * array){
	double * pointer;
	pointer = array;
	for(int i=0; i<size; i++){
		cout << *(pointer + i) << " ";
	}
}

int main() {
	int size;
	cout << "Enter size of array: ";
	cin >> size;
	double *array = new double[size];
	enterInput(size, array);
	output(size, array);
	delete array;
	delete[] array;
	return 0;
}
