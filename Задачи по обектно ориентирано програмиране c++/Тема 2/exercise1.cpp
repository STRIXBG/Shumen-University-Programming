#include <iostream>

using namespace std;

#define MARKS 5

struct student{
	char name[64];
	long long fNum;
	int mark[MARKS];
};

int main(int argc, char** argv)
{
	student std1, std2;
	
	//GET STUDENT 1:
	cout << "Enter student 1 name: ";
	cin.getline(std1.name, 64);
	cout << endl << "Enter student 1 fac Num: ";
	cin >> std1.fNum;
	cout << endl << "Enter student 1 marks (5 numbers): ";
	for(int i=0; i<MARKS; i++)
	{
		cin >> std1.mark[i];
	}
	
	//GET STUDENT 2:
	cout << endl << endl <<"Enter student 2 name: ";
	cin.getline(std2.name, 64);
	cout << endl << "Enter student 2 fac Num: ";
	cin >> std2.fNum;
	cout << endl << "Enter student 2 marks (5 numbers): ";
	for(int i=0; i<MARKS; i++)
	{
		cin >> std2.mark[i];
	}
	return 0;
}
