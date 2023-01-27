#include <iostream>

using namespace std;

int main() {
	int columns, rows, enteredNum, sumOfCols;
	do{
		cout << "Enter Rows Number in Range of 1, 20: ";
		cin >> rows;
	}
	while(rows < 1 || rows > 20);
	do{
		cout << "Enter Column Number in Range of 1, 20: ";
		cin >> columns;
	}
	while(rows < 1 || rows > 20);
	int array[rows][columns];
	int columnsArr[rows];
	//Input Array:
	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
		cout << endl << "Enter Row: " << i+1 << " Column: " << j+1 << " >>  ";
		cin >> array[i][j];
		enteredNum = array[i][j];
		columnsArr[i] = enteredNum;
		sumOfCols += enteredNum;
		}
	}
	//Output:
	for(int i=0; i<columns; i++){
		cout << endl << "Column Index: " << i << " is " << columnsArr[i];
	}
	cout << endl << "The sum of All Columns is: " << sumOfCols;
	return 0;
}
