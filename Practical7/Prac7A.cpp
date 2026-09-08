#include <iostream>
using namespace std;

class Num1
{
    int a;

public:
    Num1()
    {
        cout << "Enter Number 1:" << endl;
        cin >> a;
    }
    void display1()
    {
        cout << "Number 1:" << a << endl;
    }
    int getNum1()
    {
        return a;
    }
};

class Num2 : public Num1
{
    int b;

public:
    Num2()
    {
        cout << "Enter Number 2:" << endl;
        cin >> b;
    }
    void display2()
    {
        cout << "Number 2:" << b << endl;
    }
    int getNum2()
    {
        return b;
    }
    int multiply(){
        int x = getNum1();
        int y = getNum2();
        return x*y;
    }
};

int main()
{
    Num2 n;
    n.display1();
    n.display2();
    cout<<"Multiplication of Number 1 and 2: "<<n.multiply()<<endl;
    return 0;
}