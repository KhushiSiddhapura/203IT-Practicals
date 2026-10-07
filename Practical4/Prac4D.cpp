#include <iostream>
using namespace std;

class Employee
{
    string name;
    float salary;

public:
    Employee()
    {
        cout << "Enter employee name and salary:" << endl;
        cin >> name >> salary;
    }
    void display()
    {
        cout << "Employee Name: " << name << endl
             << "Salary: " << salary << endl;
    }
    friend void compareSalary(Employee, Employee);
};

void compareSalary(Employee e1, Employee e2)
{
    if (e1.salary > e2.salary)
    {
        cout << "Employee with Higher Salary:" << e1.name;
    }
    else if (e2.salary > e1.salary)
    {
        cout << "Employee with Higher Salary:" << e2.name;
    }
    else
    {
        cout << e1.name << " and " << e2.name << " both have equal salary!" << endl;
    }
}

int main()
{
    Employee e1, e2;
    e1.display();
    e2.display();
    compareSalary(e1, e2);
    return 0;
}

// Output:

// Enter employee name and salary:
// Khushi 20000
// Enter employee name and salary:
// Nidhish
// 19500
// Employee Name: Khushi
// Salary: 20000
// Employee Name: Nidhish
// Salary: 19500
// Employee with Higher Salary:Khushi