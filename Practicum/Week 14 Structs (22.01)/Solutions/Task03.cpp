#include <iostream>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;

const int N = 100;

struct Grades
{
    double tests[2];
    double homeworks[3];
    double writtenExam;
    double oralExam;
};

struct Student
{
    char *name;
    int fn;
    Grades grades;
};

Grades inputGrades()
{
    Grades grades;

    cout << "Please insert result from test #1: ";
    cin >> grades.tests[0];

    cout << "Please insert result from test #2: ";
    cin >> grades.tests[1];

    cout << "Please insert result from homework #1: ";
    cin >> grades.homeworks[0];

    cout << "Please insert result from homework #2: ";
    cin >> grades.homeworks[1];

    cout << "Please insert result from homework #3: ";
    cin >> grades.homeworks[2];

    cout << "Please insert result from the written exam: ";
    cin >> grades.writtenExam;

    cout << "Please insert result from the oral exam: ";
    cin >> grades.oralExam;

    return grades;
}

double finalGrade(Grades grades)
{
    double tk = (grades.tests[0] + grades.tests[1] + (grades.homeworks[0] + grades.homeworks[1] + grades.homeworks[2]) / 3) / 3;
    double i = (grades.writtenExam + grades.oralExam) / 2;
    return tk * 0.5 + i * 0.5;
}

Student inputStudent()
{
    Student student;
    student.name = new char[N];

    cout << "Enter student name: ";
    cin.getline(student.name, N);

    cout << "Enter student fn: ";
    cin >> student.fn;

    cout << "Enter student grades: " << endl;
    student.grades = inputGrades();

    return student;
}

int main()
{
    Student student;
    student = inputStudent();

    double grade = finalGrade(student.grades);
    cout << grade << endl;
    delete[] student.name;
}