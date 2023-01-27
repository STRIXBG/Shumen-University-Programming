#include <iostream>

using namespace std;

int main() {
	int sum;
	int numArray[4][4];
	cout << "Enter ROW: " << 1 << " COLUMN: " << 1 << ">> ";
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cin >> numArray[i][j];
			cout << endl << "Enter ROW: " << i+1 << " COLUMN: " << j+1 << ">> ";
			sum += numArray[i][j];
		}
	}
	cout << "Sum: " << sum;
	return 0;
}
