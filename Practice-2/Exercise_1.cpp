// Reads standart Name and Family of Person and prints it for PhoneBook

#include <iostream>

using namespace std;

string PhoneBookFormat(string firstName, string familyName){
	string formated = firstName + " , " + familyName;
	return formated;
}

int main() {
	string firstName, familyName;
	cout << "Enter Name: "; cin >> firstName;
	cout << "Enter Family: "; cin >> familyName;
	cout << PhoneBookFormat(firstName, familyName);
	return 0;
}
