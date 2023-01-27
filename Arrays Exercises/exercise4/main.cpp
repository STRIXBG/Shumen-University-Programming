#include <iostream>

using namespace std;

int main() {
	int size, sumDiagonal;
	do{
		cout << "Enter Rows And Columns! They are equal: ";
		cin >> size;
	}
	while(size < 1 || size > 20 || size < 2);
	double array[size][size];
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			cout << endl << "Enter Number for Row: " << i+1 << " and Column: " << j+1 << "  ";
			cin >> array[i][j];
		}
	}
	//Print matrix:
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			cout << array[i][j] << ' ';
		}
		cout << endl;
	}
	//Find sum:
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			if(i > j) sumDiagonal += array[i][j];
		}
	}
	cout << endl << "Sum of elements below Primary Diagonal is: " << sumDiagonal;
	//Print Above Diagonal:
	cout << endl << "All elements above Primary Diagonal: ";
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			if(i < j) cout << array[i][j] << " ";
		}
	}
	return 0;
}
