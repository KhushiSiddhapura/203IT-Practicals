#include <iostream>
using namespace std;

template <class T>
class Num
{
    T a, b;

public:
    Num()
    {
        cout << "Enter two numbers: " << endl;
        cin >> a >> b;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    T findMax()
    {
        if (a > b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
};

int main()
{
    char choice;
    do
    {
        int ch;
        cout << "1. Integer" << endl;
        cout << "2. Float" << endl;
        cout << "Enter Choice: ";
        cin >> ch;
        if (ch == 1)
        {
            Num<int> n;
            n.display();
            cout << "Greatest Number is: " << n.findMax() << endl;
        }
        else if (ch == 2)
        {
            Num<float> n;
            n.display();
            cout << "Greatest Number is: " << n.findMax() << endl;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
        cout << "Do you want to continue?(y for yes)" << endl;
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    return 0;
}

// Output:

// 1. Integer
// 2. Float
// Enter Choice: 1
// Enter two numbers: 
// 324 65
// a = 324
// b = 65
// Greatest Number is: 324
// Do you want to continue?(y for yes)
// y
// 1. Integer
// 2. Float
// Enter Choice: 2
// Enter two numbers: 
// 45.675
// 456.75
// a = 45.675
// b = 456.75
// Greatest Number is: 456.75
// Do you want to continue?(y for yes)
// Y
// 1. Integer
// 2. Float
// Enter Choice: 3
// Invalid Choice
// Do you want to continue?(y for yes)
// n