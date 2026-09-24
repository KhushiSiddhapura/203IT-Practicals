#include <iostream>
using namespace std;

class Num1
{
protected:
    int n1;

public:
    void getData1()
    {
        cout << "Enter first number:" << endl;
        cin >> n1;
    }
    void display1()
    {
        cout << "Number 1: " << n1 << endl;
    }
};

class Num2
{
protected:
    int n2;

public:
    void getData2()
    {
        cout << "Enter second number:" << endl;
        cin >> n2;
    }
    void display2()
    {
        cout << "Number 2: " << n2 << endl;
    }
};

class Num3 : public Num1, public Num2
{
protected:
    int n3;

public:
    void getData()
    {
        getData1();
        getData2();
        cout << "Enter third number:" << endl;
        cin >> n3;
    }
    void display()
    {
        display1();
        display2();
        cout << "Number 3: " << n3 << endl;
    }
    int multiply()
    {
        return n1 * n2 * n3;
    }
};

int main()
{
    Num3 n;
    n.getData();
    n.display();
    cout << "Multiplication of 3 numbers: " << n.multiply() << endl;
    return 0;
}