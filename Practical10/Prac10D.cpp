#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

ostream &grade(ostream &out)
{
    out << setiosflags(ios::fixed) << setprecision(2) << setw(6);
    return out;
}

class Student
{
    char Student_Name[30], Student_Dept[25];
    float Student_SPI, Student_CPI;

public:
    void getData()
    {
        cout << "Enter Student Name, Department, SPI and CPI:" << endl;
        cin >> Student_Name >> Student_Dept >> Student_SPI >> Student_CPI;
    }
    void display()
    {
        cout << setiosflags(ios::left) << setw(30) << Student_Name << resetiosflags(ios::left);
        cout << setw(25) << Student_Dept;
        cout << grade << Student_SPI << grade << Student_CPI << endl;
    }
};

int main()
{
    int N;
    fstream file("StudentDB.txt", ios::in | ios::app | ios::binary | ios::out);
    cout << "Enter Number of Students:";
    cin >> N;
    Student writeObj[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Enter details of Student" << i + 1 << ":" << endl;
        writeObj[i].getData();
        file.write((char *)&writeObj[i], sizeof(writeObj[i]));
    }
    Student readObj[N];
    cout << setw(30) << "Student Name" << setw(25) << "Department" << setw(6) << "SPI" << setw(6) << "CPI" << endl;
    file.clear();
    file.seekg(0, ios::beg);
    for (int i = 0; i < N; i++)
    {
        file.read((char *)&readObj[i], sizeof(readObj[i]));
        readObj[i].display();
    }
    file.close();
    return 0;
}

// Output:

// Enter Number of Students:3
// Enter details of Student1:
// Enter Student Name, Department, SPI and CPI:
// Khushi_S_Siddhapura
// Information_Technology
// 9.37
// 9.33
// Enter details of Student2:
// Enter Student Name, Department, SPI and CPI:
// Hiya_P_Patel
// Information_Technology
// 8
// 7.5
// Enter details of Student3:
// Enter Student Name, Department, SPI and CPI:
// Dhruvi_B_Trada
// Information_Technology
// 7
// 7.3
//                   Student Name               Department   SPI   CPI
// Khushi_S_Siddhapura              Information_Technology  9.37  9.33
// Hiya_P_Patel                     Information_Technology  8.00  7.50
// Dhruvi_B_Trada                   Information_Technology  7.00  7.30