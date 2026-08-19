#include <iostream>
using namespace std;

class Complex
{
    int real, img;

public:
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    Complex(){}
    void display()
    {
        cout << real << " + i" << img << endl;
    }
    friend Complex add(Complex, Complex);
};

Complex add(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;

    return temp;
}

int main()
{
    int r1, r2, i1, i2;
    cout << "Enter real and imaginary part: " << endl;
    cin >> r1 >> i1;
    cout << "Enter real and imaginary part: " << endl;
    cin >> r2 >> i2;

    Complex c1(r1,i1);
    Complex c2(r2,i2);
    c1.display();
    c2.display();

    Complex c3 = add(c1,c2);

    cout<<"Addition of 1st and 2nd: "<<endl;
    c3.display();
    return 0;
}