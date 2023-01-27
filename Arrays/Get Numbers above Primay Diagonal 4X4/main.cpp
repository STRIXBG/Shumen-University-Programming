#include<iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vect;
	int matrix[4][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };
	/*
	MATRIX:
	1, 2, 3, 4
	5, 6, 7, 8
	9, 10, 11, 12
	13, 14, 15, 16
	Expected output: 2, 3, 4, 7, 8, 12
	*/
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(i < j) cout << matrix[i][j] << " ";
		}
	}
	
	return 0;
}
