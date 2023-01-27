#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "Bulgarian");
	int numGrades;
	double averageGrade;
	cout << endl << "Enter count of grades: "; cin >> numGrades;
	for(int i=0; i<numGrades; i++){
		jump:
		cout << endl << "Enter grade: ";
		int grade;
		cin >> grade;
		if(grade < 2 || grade > 6){
			cout << endl << "The number must be between 2 and 6!";
			goto jump;
		}
		averageGrade += grade;	
	}
	averageGrade /= numGrades;
	cout << "Average Grade: " << setprecision(2) << averageGrade;
	return 0;
}
