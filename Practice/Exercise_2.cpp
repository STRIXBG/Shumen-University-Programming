#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "Bulgarian");
	int numGrades;
	double averageGrade;
	cout << "Enter count of grades: "; cin >> numGrades;
	for(int i=0; i<numGrades; i++){
		cout << "Enter grade: ";
		int grade;
		cin >> grade;
		averageGrade += grade;	
	}
	averageGrade /= numGrades;
	cout << "Average Grade: " << setprecision(2) << averageGrade;
	return 0;
}
