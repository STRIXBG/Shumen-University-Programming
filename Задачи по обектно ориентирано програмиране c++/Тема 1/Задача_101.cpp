// Program Zad101.cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int const NUM = 5;

struct student
{
	long long facnom;
	char name[26];
	char familyName[26];
	double marks[NUM];
};

void read_student(student&);
void print_student(const student&);
void sorttable(int n, student* []);
double average(double*);

int main()
{
	setlocale(LC_ALL, "Bulgarian");
	cout << setprecision(2) << setiosflags(ios::fixed);
	student table[30];
	student* ptable[30];
	int n;
	do
	{
		cout << "number of students? ";
		cin >> n;
	}
	while (n < 1 || n > 30);
	int i;
	for (i = 0; i <= n-1; i++)
	{
		read_student(table[i]);
		ptable[i] = &table[i];
	}
	cout << "Table: \n";
	for (i = 0; i <= n-1; i++)
	{
		print_student(table[i]);
		cout << endl;
	}
	sorttable(n, ptable);
	cout << "\n New Table: \n";
	for (i = 0; i <= n-1; i++)
	{
		print_student(*ptable[i]);
		cout << setw(7) << average(ptable[i]->marks) << endl;
	}
	return 0;
}

double average(double *n)
{
	int sum = 0;
	for(int i=0; i<NUM; i++)
	{
		sum += n[i];
	}
	return sum/NUM;
}

void read_student(student& std)
{
	
	cout << "\n\nВъведете името на новия студент: ";
	cin.ignore();
	cin.getline(std.name, 26);
	cout << "\n\nВъведете фамилията на новия студент: ";
	cin.ignore();
	cin.getline(std.name, 26);
	cout << "\nВъведете факултетния номер на студента: ";
	cin >> std.facnom;
	cout << "\nВъведете оценките на студента, които са общо 5 на брой: ";
	for(int i=0; i<NUM; i++)
	{
		cin >> std.marks[i];
	}
}

void print_student(const student& std)
{
	cout << "\nИме на студента: " << std.name;
	cout << "\Фамилия на студента: " << std.familyName;
	cout << "\nФакултетен номер: " << std.facnom;
	cout << "\nОценки на студента: ";
	for(int i=0; i<NUM; i++)
	{
		cout << " " << std.marks[i]; 
	}
}

void sorttable(int n, student* a[])
{
	for (int i = 0; i <= n-2; i++)
	{
		int k = i;
		double max = average(a[i]->marks);
		for (int j = i+1; j <= n-1; j++)
			if (average(a[j]->marks) > max)
			{
				max = average(a[j]->marks);
				k = j;
			}
		student* x;
		x = a[i];
		a[i] = a[k];
		a[k] = x;
	}
}

