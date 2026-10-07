#include <iostream>
using namespace std;

class Nums
{
    int a, b;

public:
    Nums()
    {
        cout << "Enter two numbers: " << endl;
        cin >> a >> b;
    }
    void display()
    {
        cout << "a=" << a << endl
             << "b=" << b << endl;
    }
    friend float mean(Nums);
};

float mean(Nums temp)
{
    float res = (temp.a + temp.b) / 2.00;
    return res;
}

int main()
{
    Nums n;
    n.display();
    cout<<"Average of a and b is: "<<mean(n);
    return 0;
}

// Output:

// Enter two numbers: 
// 4 9
// a=4
// b=9
// Average of a and b is: 6.5