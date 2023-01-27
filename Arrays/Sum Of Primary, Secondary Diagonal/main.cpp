#include <iostream>

using namespace std;

int main() {
	int numArray[3][3];
	int sumPrimary=0;
	int sumSecondary=0;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << endl << "Enter ROW: " << i+1 << " COLUMN: " << j+1 << ">> ";
			cin >> numArray[i][j];
		}
	}
	//Get integers:
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(i == j) sumPrimary+= numArray[i][j];
			if(i+j == 2) sumSecondary+= numArray[i][j];
		}
	}
	//Print the Result:
	cout << endl << "Primary diagonal sum: " << sumPrimary;
	cout << endl << "Secondary diagonal sum " << sumSecondary;
	return 0;
}
