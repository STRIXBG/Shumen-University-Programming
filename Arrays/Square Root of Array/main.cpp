#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//Read Input:
	int numArray[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << endl << "Enter ROW: " << i+1 << " COLUMN: " << j+1 << ">> ";
			cin >> numArray[i][j];
		}
	}
	//Print the Result:
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << ceil(sqrt(numArray[i][j])) << " ";
		}
		cout << endl;
	}
	return 0;
}
