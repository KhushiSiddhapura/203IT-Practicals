#include <iostream>
using namespace std;

class Num
{
    int a;

public:
    Num() {}
    Num(int x)
    {
        a = x;
    }
    void operator++()
    {
        a++;
    }
    void operator--()
    {
        a--;
    }
    void display()
    {
        cout << "a=" << a << endl;
    }
};

int main()
{
    int x;
    cout << "Enter a number: " << endl;
    cin >> x;
    Num n(x);
    cout << "Before calling overloaded increment: " << endl;
    n.display();
    ++n;
    cout << "After calling overloaded increment and before calling overloaded decrement" << endl;
    n.display();
    --n;
    cout << "After calling overloaded decrement: " << endl;
    n.display();
    return 0;
}

// Output:

// Enter a number: 
// 7
// Before calling overloaded increment: 
// a=7
// After calling overloaded increment and before calling overloaded decrement
// a=8
// After calling overloaded decrement: 
// a=7