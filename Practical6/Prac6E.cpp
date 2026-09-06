#include <iostream>
#include <math.h>
using namespace std;

class Polar;
class Rectangle
{
    float x, y;

public:
    Rectangle()
    {
        x = 0;
        y = 0;
    }
    Rectangle(float a, float b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
    }
    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }
    Rectangle(Polar);
};

class Polar
{
    float r, th;

public:
    Polar()
    {
        r = 0;
        th = 0;
    }
    Polar(float radius, float theta)
    {
        r = radius;
        th = theta;
    }
    void display()
    {
        cout << "radius=" << r << endl;
        cout << "theta=" << th << endl;
    }
    float getR()
    {
        return r;
    }
    float getTheta()
    {
        return th;
    }
    Polar(Rectangle);
};

Rectangle::Rectangle(Polar p)
{
    float r = p.getR();
    float th = p.getTheta();
    x = r * cos(th);
    y = r * sin(th);
}

Polar::Polar(Rectangle rec)
{
    float x = rec.getX();
    float y = rec.getY();
    r = sqrt((x * x) + (y * y));
    th = atan(x / y);
}

int main()
{
    char choice;
    do
    {
        int ch;
        cout << "Enter.." << endl
             << "1 for rectangle to polar" << endl
             << "2 for polar to rectangle:" << endl;
        cin >> ch;
        if (ch == 1)
        {
            float x, y;
            cout << "Enter value of x and y" << endl;
            cin >> x >> y;
            Rectangle r1(x, y);
            Polar p1(r1);
            r1.display();
            p1.display();
        }
        else if (ch == 2)
        {
            float r, th;
            cout << "enter radius and theta: " << endl;
            cin >> r >> th;
            Polar p2(r, th);
            Rectangle r2(p2);
            p2.display();
            r2.display();
        }
        else
        {
            cout << "Invalid Choice:" << endl;
        }
        cout << "Do you want to continue?(Enter y for yes)" << endl;
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}