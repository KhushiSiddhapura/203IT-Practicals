#include <iostream>
using namespace std;

class Student
{
    string Student_Name;
    int Student_Id, Student_Csem;
    double Student_SPI, Student_CPI;

public:
    void getData()
    {
        cout << "Enter Student ID:" << endl;
        cin >> Student_Id;
        cout << "Enter Student Name:" << endl;
        cin >> Student_Name;
        cout << "Enter Current Semester:" << endl;
        cin >> Student_Csem;
        cout << "Enter SPI and CPI:" << endl;
        cin >> Student_SPI >> Student_CPI;
    }

    void displayData()
    {
        cout << "Student Id: " << Student_Id << endl;
        cout << "Name: " << Student_Name << endl;
        cout << "Current Semester: " << Student_Csem << endl;
        cout << "SPI: " << Student_SPI << endl;
        cout << "CPI: " << Student_CPI << endl;
    }

    void filteredCPI()
    {
        if (Student_CPI >= 7.6 && Student_CPI <= 8.9)
        {
            displayData();
        }
    }

    void swap(Student &a, Student &b)
    {
        if (a.Student_SPI > b.Student_SPI)
        {
            Student temp = a;
            a = b;
            b = temp;
        }
    }
};

int main()
{
    int n;
    cout << "Enter how many student's data you want to enter:" << endl;
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Data of Student " << i + 1 << endl;
        s[i].getData();
    }

    cout << "All data: " << endl;
    for (int i = 0; i < n; i++)
    {
        s[i].displayData();
    }

    cout << "Student data whose CPI is between 7.6 & 8.9" << endl;
    for (int i = 0; i < n; i++)
    {
        s[i].filteredCPI();
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            s[i].swap(s[j], s[j + 1]);
        }
    }
    cout << "SPI in Ascending Order" << endl;
    for (int i = 0; i < n; i++)
    {
        s[i].displayData();
    }

    return 0;
}