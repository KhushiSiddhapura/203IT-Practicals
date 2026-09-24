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