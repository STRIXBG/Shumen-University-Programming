#include <iostream>

using namespace std;

int main() {
	int sum;
	int numArray[3][4];
	cout << "Enter ROW: " << 1 << " COLUMN: " << 1 << ">> ";
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cin >> numArray[i][j];
			cout << endl << "Enter ROW: " << i+1 << " COLUMN: " << j+1 << ">> ";
			if(numArray[i][j] == 5) numArray[i][j] = 0;
		}
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cout << numArray[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
