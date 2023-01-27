#include <iostream>

using namespace std;

void function2(int arrayLen, int *array){
	int index = 0;
	do{
		cin >> array[index];
	}while(index != arrayLen);
}

void function1(int arrayLen, int *array){
	int index = 0;
	while(index != arrayLen){
		cin >> array[index];
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
