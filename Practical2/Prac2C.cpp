#include <iostream>
#include <math.h>
using namespace std;

float area(float a)
{
    return (sqrt(3) * a * a) / 4.0;
}

float area(float l, float b)
{
    return 0.5 * l * b;
}

int main()
{
    cout<<"Area of Right-angle Triangle with base = 6 units and height = 8 units :"<<area(6,8)<<endl;
    cout<<"Area of Equilateral Triangle with sidelength = 4 units :"<<area(4)<<endl;
    cout<<"Area of Isosceles Triangle with height = 10.25 units and base = 6.87 units: "<<area(10.25,6.87)<<endl;

    return 0;
}