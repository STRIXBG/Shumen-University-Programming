#include <iostream>

using namespace std;

int max(int n1, int n2, int n3){
	int tmp = 0;
	if(n1 > n2){
		tmp = n1;
	}
	else{
		tmp = n2;
	}
	if(n3 > tmp) return n3;
	return tmp;
}

int main() {
	int n1, n2, n3;
	cout << "Enter num1: " << endl; cin >> n1;
	cout << "Enter num2: " << endl; cin >> n2;
	cout << "Enter num3: " << endl; cin >> n3;
	cout << "Biggest num is: " << max(n1, n2, n3);
	return 0;
}
