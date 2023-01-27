#include <iostream>

using namespace std;

int main() {
	int numArray[3][4];
	int singleArray[12];
	int k=0;
	cout << "Enter ROW: " << 1 << " COLUMN: " << 1 << ">> ";
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cin >> numArray[i][j];
			cout << endl << "Enter ROW: " << i+1 << " COLUMN: " << j+1 << ">> ";
			singleArray[k] = numArray[i][j];
			k++;
		}
	}
	//Print the result:
	for(int i=0; i<sizeof(singleArray) / sizeof(int); i++){
		cout << singleArray[i] << " ";
	}
	return 0;
}
