#include <iostream>

using namespace std;

#define MARKS 5

struct student{
	string name;
	long long fNum;
	int mark[MARKS];
};

void printStudent(student *std, int n)
{
	cout << endl << "INFORMATION ABOUT STUDENT " << n+1 << endl;
	cout << "STUDENT NAME: " << std[n].name << endl;
	cout << "STUDENT FAC NUM: " << std[n].fNum << endl;
	cout << "STUDENT MARKS: ";
	for(int i=0; i<MARKS; i++)
	{
		cout << std[n].mark[i] << " ";
	}
	cout << endl;
}

int main(int argc, char** argv)
{
	student std[2];

	for(int i=0; i<2; i++)
	{
		cout << endl << endl << "Enter student " << i+1 << " name: ";
		if(i > 0) cin.ignore();
		getline(cin, std[i].name);
		cout << endl << "Enter student " << i+1 << " fac Num: ";
		cin >> std[i].fNum;
		cout << endl << "Enter student " << i+1 << " marks (5 numbers): ";
		for(int j=0; j<MARKS; j++)
		{
			cin >> std[i].mark[j];
		}
	}
	printStudent(std, 0);
	printStudent(std, 1);
	return 0;
}
