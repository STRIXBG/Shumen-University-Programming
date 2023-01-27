#include<iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vect;
	int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	/*
	MATRIX:
	1, 2, 3
	4, 5, 6
	7, 8, 9
	a
	Needed output: 2, 3, 6
	*/
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(i < j) cout << matrix[i][j] << " ";
		}
	}
	
	return 0;
}
