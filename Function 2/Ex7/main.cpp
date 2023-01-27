#include <iostream>

using namespace std;

int max(int *array){
	int max = array[0];
	for(int i=0; i<20; i++){
		if(array[i] > max) max = array[i];
	}
	return max;
}

int main() {
	int array[20] = {1,12,3,54,5,6,7,38,9,10,11,12,213,14,15,16,17,18,19,20};
	cout << "MAX: " << max(array) << endl;
	return 0;
}
