#include <iostream>
using namespace std;

class Student
{
protected:
    int rollno;
    string name;

public:
    void getDataS()
    {
        cout << "Enter roll number and name of student: " << endl;
        cin >> rollno >> name;
    }
    void displayS()
    {
        cout << "Roll Number: " << rollno << endl
             << "Name: " << name << endl;
    }
};

class Exam : public Student
{
protected:
    int marks[5];

public:
    void getDataE()
    {
        getDataS();
        cout << "Enter marks of 5 subjects: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
    void displayE()
    {
        displayS();
        cout << "Marks of 5 Subjects: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Marks of Subject " << i + 1 << ": " << marks[i] << endl;
        }
    }
};

class Result : public Exam
{
protected:
    int total;
    float avg;

public:
    void getDataR()
    {
        getDataE();
        total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        avg = total / 5.0;
    }
    void displayR()
    {
        displayE();
        cout << "Total marks obtained (Out of 500): " << total << endl;
        cout << "Average marks: " << avg << endl;
    }
};
int main()
{
    char choice;
    do
    {
        Result r;
        r.getDataR();
        int ch;
        cout << "Press.." << endl;
        cout << "1. To display only student details." << endl;
        cout << "2. To display student and marks details." << endl;
        cout << "3. To display result of student." << endl;
        cin >> ch;
        if (ch == 1)
        {
            r.displayS();
        }
        else if (ch == 2)
        {
            r.displayE();
        }
        else if (ch == 3)
        {
            r.displayR();
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
        cout << "Do you want to continue?(y for yes)" << endl;
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}

// Output:

// Enter roll number and name of student: 
// 473
// Khushi
// Enter marks of 5 subjects: 
// 23
// 22
// 21
// 20
// 28
// Press..
// 1. To display only student details.
// 2. To display student and marks details.
// 3. To display result of student.
// 3
// Roll Number: 473
// Name: Khushi
// Marks of 5 Subjects: 
// Marks of Subject 1: 23
// Marks of Subject 2: 22
// Marks of Subject 3: 21
// Marks of Subject 4: 20
// Marks of Subject 5: 28
// Total marks obtained (Out of 500): 114
// Average marks: 22.8
// Do you want to continue?(y for yes)
// y
// Enter roll number and name of student: 
// 439
// Nidhish
// Enter marks of 5 subjects: 
// 29
// 28
// 27
// 24
// 21
// Press..
// 1. To display only student details.
// 2. To display student and marks details.
// 3. To display result of student.
// 2
// Roll Number: 439
// Name: Nidhish
// Marks of 5 Subjects: 
// Marks of Subject 1: 29
// Marks of Subject 2: 28
// Marks of Subject 3: 27
// Marks of Subject 4: 24
// Marks of Subject 5: 21
// Do you want to continue?(y for yes)
// y
// Enter roll number and name of student: 
// 473    
// Khushi
// Enter marks of 5 subjects: 
// 23
// 22
// 21
// 20
// 28
// Press..
// 1. To display only student details.
// 2. To display student and marks details.
// 3. To display result of student.
// 1
// Roll Number: 473
// Name: Khushi
// Do you want to continue?(y for yes)
// Y
// Enter roll number and name of student: 
// 439    
// Nidhish
// Enter marks of 5 subjects: 
// 29
// 28
// 27
// 24
// 21
// Press..
// 1. To display only student details.
// 2. To display student and marks details.
// 3. To display result of student.
// 4
// Invalid Choice
// Do you want to continue?(y for yes)
// n