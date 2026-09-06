#include <iostream>
using namespace std;

class Complex
{
    int real, img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << real << " + i" << img << endl;
    }
    void operator++()
    {
        real++;
    }
    void operator++(int)
    {
        img++;
    }
};

int main()
{
    int r, i;
    cout << "Enter real and imaginary part: " << endl;
    cin >> r >> i;
    Complex c(r, i);
    c.display();
    ++c;
    cout << "After calling pre increment:" << endl;
    c.display();
    c++;
    cout << "After calling post increment: " << endl;
    c.display();
    return 0;
}