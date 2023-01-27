#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Bulgarian");
	int n, m;
	jumpN: cout << endl << "Enter N (first variable): "; cin >> n;
	jumpM: cout << endl << "Enter M (second variable): "; cin >> m;
	if(n < 0){
		cout << "N must be positive!";
		goto jumpN;
	}
	if(m < 0){
		cout << "M must be positive!";
		goto jumpM;
	}
	if(m < n){
		cout << "M must be Smaller than N!";
		goto jumpN;
	}
	for(int i=n; i<=m; i++){
		if(i%4 == 0){
			cout << ' ' << i;
		}
	}
	return 0;
}
