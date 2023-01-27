/*
Namira vsichki kratni na 11 ot 12 do 150 i otpechatva proizvedenieto im
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int sum;
	int startNum = 12, endNum = 150;
	for(int i = startNum; i<= endNum; i++){
		if(i % 11 == 0){
			sum += i;
		} 
	}
	cout << "The sum of all dividable by 11 numbers in range of 12-150 is: " << sum;
	return 0;
}
