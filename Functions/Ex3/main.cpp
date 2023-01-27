#include <iostream>

using namespace std;

int * functionReturn(int *array){
	return array;
}

void function2(int size, int *array){
	int index = 0;
	do{
		cout << array[index] << endl;
		index++;
	}while(index != size);
	int sum = 0;
	int * p = functionReturn(array);
	for(int i=0; i<size; i++){
		int num = p[i];
		sum += num;
		cout << num << endl;
	}
	cout << "Sum is:" << sum << endl;
}

void function1(int size, int *array){
	int index = 0;
	while(index != size){
		cin >> array[index];
		index++;
	}
	function2(size, array);
}

int main() {
	int size1;
	cin >> size1;
	int array1[size1];
	function1(size1, array1);
	return 0;
}
