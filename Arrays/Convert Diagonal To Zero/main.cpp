#include <iostream>

using namespace std;

int main() {
	int numArray[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << endl << "Enter ROW: " << i+1 << " COLUMN: " << j+1 << ">> ";
			cin >> numArray[i][j];
		}
	}
	//Convert Diagonal to Zero:
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(i == j) numArray[i][j] = 0;
		}
	}
	//Print the Result:
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << numArray[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
