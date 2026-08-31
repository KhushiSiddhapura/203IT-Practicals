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
};

int main()
{

    return 0;
}