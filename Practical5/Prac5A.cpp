#include <iostream>
using namespace std;

class numB;
class numA
{
    int a;

public:
    numA()
    {
        cout << "Enter integer value of A: " << endl;
        cin >> a;
    }
    void display()
    {
        cout << "a=" << a << endl;
    }
    friend int add(numA, numB);
};

class numB
{
    int b;

public:
    numB()
    {
        cout << "Enter integer value of b: " << endl;
        cin >> b;
    }
    void display()
    {
        cout << "b=" << b << endl;
    }
    friend int add(numA, numB);
};

int add(numA n1, numB n2)
{
    return n1.a + n2.b;
}

int main()
{
    numA n1;
    numB n2;
    n1.display();
    n2.display();

    cout << "Addition of a and b is " << add(n1, n2) << endl;
    return 0;
}