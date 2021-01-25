#include <iostream>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

const int N = 100;

struct Student
{
    char name[N];
    unsigned fn;
    unsigned courseNum;
    short group;
};

Student createStudent()
{
    Student result;

    //used in order to input the name correctly
    cin.get();

    cout << "Enter a name: ";
    cin.getline(result.name, 100);

    cout << "Enter a faculty number: ";
    cin >> result.fn;

    cout << "Enter a course: ";
    cin >> result.courseNum;

    cout << "Enter a group: ";
    cin >> result.group;

    return result;
}

Student *createStudentsArray(int n)
{
    Student *students = new Student[n];
    for (int i = 0; i < n; i++)
    {
        students[i] = createStudent();
    }
    return students;
}

void getStudent(int fn, Student *students, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (fn == students[i].fn)
        {
            Student currentStudent = students[i];
            cout << currentStudent.name << " " << currentStudent.fn << " " << currentStudent.courseNum << " " << currentStudent.group << endl;
            return;
        }
    }
    cerr << "No such student found" << endl;
}

int main()
{
    int n;
    cout << "Insert a number" << endl;
    cin >> n;

    Student *students = createStudentsArray(n);
    
    int fn;
    cout << "Which fn do you want to search for?" << endl;
    cin >> fn;
    getStudent(fn, students, n);

    delete[] students;
}