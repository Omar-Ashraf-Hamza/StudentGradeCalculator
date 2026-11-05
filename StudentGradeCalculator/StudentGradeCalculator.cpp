#include <iostream>
#include <string>
using namespace std;

int StudentGradeCalculator(int grade1, int grade2, int grade3)
{
	int total = grade1 + grade2 + grade3;
	int average = total / 3;
	return average;
}

int main()
{
    string studentName = "Ahmad";
    int grade1 = 85;
    int grade2 = 90;
    int grade3 = 80;

    cout << "Student: " << studentName << endl;
    cout << "Grade 1: " << grade1 << endl;
    cout << "Grade 2: " << grade2 << endl;
    cout << "Grade 3: " << grade3 << endl;
    cout << "\nAverage: " << StudentGradeCalculator(grade1, grade2, grade3) <<"%" << endl;
	cout << "-------------------------" << endl;

    return 0;

}
