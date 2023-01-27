#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Bulgarian");
	for(int i=1; i<=100; i++){
		if(i%3 == 0){
			cout << ' ' << i;
		}
	}
	return 0;
}
