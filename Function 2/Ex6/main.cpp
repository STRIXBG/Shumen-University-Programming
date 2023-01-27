#include <iostream>

using namespace std;

void write(int *array){
	for(int i=0; i<15; i++){
		cin >> array[i];
	}
}

int main() {
	int array[15];
	write(array);
	return 0;
}
