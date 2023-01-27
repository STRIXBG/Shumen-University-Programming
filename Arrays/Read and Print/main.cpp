#include <iostream>

using namespace std;

int main() {
	int numArray[3][5];
	cout << "Enter ROW: " << 1 << " COLUMN: " << 1 << ">> ";
	for(int i=0; i<3; i++){
		for(int j=0; j<5; j++){
			cin >> numArray[i][j];
			cout << endl << "Enter ROW: " << i+1 << " COLUMN: " << j+1 << ">> ";
		}
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<5; j++){
			cout << numArray[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
