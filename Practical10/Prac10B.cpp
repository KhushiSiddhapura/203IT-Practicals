#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class Student
{
    int Student_id;
    char Student_Name[20];
    float Student_cpi;

public:
    void getData()
    {
        cout << "Enter Student Id, Name and CPI" << endl;
        cin >> Student_id >> Student_Name >> Student_cpi;
    }
    void display()
    {
        cout << setiosflags(ios::left) << setw(3) << Student_id << resetiosflags(ios::left)<<"|";
        cout << setw(20) << Student_Name<<"|";
        cout << setiosflags(ios::left) << setw(4) << setiosflags(ios::fixed) << setprecision(2) << Student_cpi << endl;
    }
};

int main()
{
    fstream file;
    file.open("Prac10B.txt", ios::in | ios::out | ios::binary);
    Student s1, s2;
    s1.getData();
    file.write((char *)&s1, sizeof(s1));
    cout << "Object 1 which is stored by program" << endl;
    s1.display();
    file.seekg(0, ios::beg);
    file.read((char *)&s2, sizeof(s2));
    cout << "Object 2 which is fetched from file which had data of Object 1" << endl;
    s2.display();
    file.close();
    return 0;
}

// Output:

// Enter Student Id, Name and CPI
// 101
// Khushi_Siddhapura
// 9.33
// Object 1 which is stored by program
// 101|   Khushi_Siddhapura|9.33
// Object 2 which is fetched from file which had data of Object 1
// 101|   Khushi_Siddhapura|9.33