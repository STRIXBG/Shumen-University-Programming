#include <iostream>

using namespace std;

int main() {
	int m, n;
	cout << "Enter m And n: ";
	cin >> m; cin >> n;
	cout << "Result:" << endl;
	for(int i=m; i<=n; i++){
		if(i % 7 == 0) cout << i << " ";
	}
	return 0;
}
