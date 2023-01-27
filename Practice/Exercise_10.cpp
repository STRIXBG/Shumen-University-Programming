#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Bulgarian");
	int sumPos, sumNeg;
	for(int i=0; i<10; i++){
		int num;
		cout << endl << "Enter a number " << i+1 << " : "; cin >> num;
		if(num<0) sumNeg+=num;
		else if(num>0) sumPos+=num;
	}
	cout << endl << "Sum of Positive Numbers: " << sumPos;
	cout << endl << "Sum of Negative Numbers: " << sumNeg;
	return 0;
}
