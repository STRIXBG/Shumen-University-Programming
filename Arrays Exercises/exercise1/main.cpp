#include <iostream>

using namespace std;

int main() {
	double array[20][30];
	int rows, cols;
	cout << endl << "Enter rows of the array: " ; cin >> rows;
	while(rows < 1 || rows > 20){
		cout << endl << "Invalid Row Number! Enter 1 to 20: " ; cin >> rows;
	}
	cout << endl << "Enter cols of the array: " ; cin >> cols;
	while(cols < 1 || cols > 30){
		cout << endl << "Invalid Columns Number! Enter 1 to 30: " ; cin >> cols;
	}
	//Input:
	int biggestNum=0, enteredNum=0;
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			cout << endl << "Enter Number for Row: " << i+1 << " and Column: " << j+1 << "  ";
			cin >> array[i][j];
			enteredNum = array[i][j];
			if(array[i][j] > biggestNum) biggestNum = enteredNum;
		}
	}
	//Print Biggest Number:
	cout << endl << "Biggest Number: " << biggestNum;
	return 0;
}
