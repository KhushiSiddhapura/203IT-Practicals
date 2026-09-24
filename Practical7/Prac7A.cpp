#include <iostream>
using namespace std;

class Num1
{
protected:
    int a;

public:
    void getNum1()
    {
        cout << "Enter First Number:" << endl;
        cin >> a;
    }
    void displayNum1()
    {
        cout << "Number 1: " << a << endl;
    }
};

class Num2 : public Num1
{
protected:
    int b;

public:
    void getNum2()
    {
        getNum1();
        cout << "Enter Second Number: " << endl;
        cin >> b;
    }
    void displayNum2()
    {
        displayNum1();
        cout << "Number 2: " << b << endl;
    }
    int multiply()
    {
        return a * b;
    }
};

int main()
{
    Num2 n;
    n.getNum2();
    n.displayNum2();
    cout << "Multiplication of first and second is " << n.multiply() << endl;
    return 0;
}