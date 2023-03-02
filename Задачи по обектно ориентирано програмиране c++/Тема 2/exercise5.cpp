#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define MARKS 5

struct student{
	string name;
	long long fNum;a
	int mark[MARKS];
	int marksSum;
};

bool compare(student a, student b){
	if(a.marksSum > b.marksSum)
		return 1;
	else 
		return 0;
}

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

void readStudent(student *std, int n)
{
	cout << endl << endl << "Enter student " << n+1 << " name: ";
	if(n > 0) cin.ignore();
	getline(cin, std[n].name);
	cout << endl << "Enter student " << n+1 << " fac Num: ";
	cin >> std[n].fNum;
	cout << endl << "Enter student " << n+1 << " marks (5 numbers): ";
	for(int i=0; i<MARKS; i++)
	{
		cin >> std[n].mark[i];
		std[n].marksSum += std[n].mark[i];
	}
}

int main(int argc, char** argv)
{
	student std[2];

	for(int i=0; i<2; i++)
	{
		readStudent(std, i);
	}
	sort(std, std+2, compare);
	cout << endl << "ALL STUDENTS AFTER SORTING\n\n";
	printStudent(std, 0);
	printStudent(std, 1);
	return 0;
}
