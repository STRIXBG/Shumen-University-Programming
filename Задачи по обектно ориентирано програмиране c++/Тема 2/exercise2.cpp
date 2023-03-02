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
	student std[2];
	
	for(int i=0; i<2; i++)
	{
		cout << endl << endl << "Enter student " << i+1 << " name: ";
		cin.getline(std[i].name, 64);
		cout << endl << "Enter student " << i+1 << " fac Num: ";
		cin >> std[i].fNum;
		cout << endl << "Enter student " << i+1 << " marks (5 numbers): ";
		for(int i=0; i<MARKS; i++)
		{
			cin >> std[i].mark[i];
		}	
	}
	return 0;
}
