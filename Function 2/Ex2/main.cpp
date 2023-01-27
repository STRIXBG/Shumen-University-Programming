#include <iostream>

using namespace std;

int max(int n1, int n2){
	if(n1 > n2) return n1;
	return n2;
}

int main() {
	int n1, n2;
	cout << "Enter num1: " << endl; cin >> n1;
	cout << "Enter num2: " << endl; cin >> n2;
	cout << "Biggest num is: " << max(n1, n2);
	return 0;
}
