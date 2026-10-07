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

    void search(int id)
    {
        if (Student_Id == id)
        {
            displayData();
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

    int id;
    cout << "Enter ID of student to display their data:" << endl;
    cin >> id;

    for (int i = 0; i < n; i++)
    {
        s[i].search(id);
    }
    return 0;
}

// Output:

// Enter how many student's data you want to enter:
// 3
// Enter Data of Student 1
// Enter Student ID:
// 1
// Enter Student Name:
// Khushi
// Enter Current Semester:
// 2
// Enter SPI and CPI:
// 9.37
// 9.33
// Enter Data of Student 2
// Enter Student ID:
// 2
// Enter Student Name:
// Nidhish
// Enter Current Semester:
// 2
// Enter SPI and CPI:
// 8
// 8.5
// Enter Data of Student 3
// Enter Student ID:
// 3
// Enter Student Name:
// Hiya
// Enter Current Semester:
// 2
// Enter SPI and CPI:
// 7
// 8
// All data: 
// Student Id: 1
// Name: Khushi
// Current Semester: 2
// SPI: 9.37
// CPI: 9.33
// Student Id: 2
// Name: Nidhish
// Current Semester: 2
// SPI: 8
// CPI: 8.5
// Student Id: 3
// Name: Hiya
// Current Semester: 2
// SPI: 7
// CPI: 8
// Student data whose CPI is between 7.6 & 8.9
// Student Id: 2
// Name: Nidhish
// Current Semester: 2
// SPI: 8
// CPI: 8.5
// Student Id: 3
// Name: Hiya
// Current Semester: 2
// SPI: 7
// CPI: 8
// SPI in Ascending Order
// Student Id: 3
// Name: Hiya
// Current Semester: 2
// SPI: 7
// CPI: 8
// Student Id: 2
// Name: Nidhish
// Current Semester: 2
// SPI: 8
// CPI: 8.5
// Student Id: 1
// Name: Khushi
// Current Semester: 2
// SPI: 9.37
// CPI: 9.33
// Enter ID of student to display their data:
// 2
// Student Id: 2
// Name: Nidhish
// Current Semester: 2
// SPI: 8
// CPI: 8.5