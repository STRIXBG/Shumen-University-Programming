#include <iostream>

using namespace std;

void function2(int arrayLen, int *array){
	for(int i=0; i<arrayLen; i++){
		cout << array[i] << endl;
	}
}

void function1(int arrayLen, int *array){
	for(int i=0; i<arrayLen; i++){
		cin >> array[i];
	}
}

int main() {
	int arrayLen;
	cin >> arrayLen;
	int array[arrayLen];
	function1(arrayLen, array);
	function2(arrayLen, array);
	return 0;
}
