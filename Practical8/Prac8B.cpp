#include <iostream>
using namespace std;

class Shape
{
protected:
    float x, y;

public:
    Shape()
    {
        x = 0.0;
        y = 0.0;
    }
    Shape(float a, float b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
    virtual int display_area() = 0;
};

class Rectangle : public Shape
{
public:
    Rectangle() {}
    Rectangle(float a, float b) : Shape(a, b)
    {
        cout << "Rectangle created" << endl;
    }
    int display_area()
    {
        return x * y;
    }
};

class Triangle : public Shape
{
public:
    Triangle() {}
    Triangle(float a, float b) : Shape(a, b)
    {
        cout << "Triangle created" << endl;
    }
    int display_area()
    {
        return (0.5 * x * y);
    }
};

int main()
{
    char choice;
    do
    {
        Shape *ptr;
        int ch;
        cout << "1.Rectangle" << endl;
        cout << "2.Triangle" << endl;
        cout << "Enter your choice" << endl;
        cin >> ch;
        if (ch == 1)
        {
            float x, y;
            cout << "Enter x and y:" << endl;
            cin >> x >> y;
            Rectangle r(x, y);
            ptr = &r;
            ptr->display();
            cout << "Area of rectangle is " << ptr->display_area() << endl;
        }
        else if (ch == 2)
        {
            float x, y;
            cout << "Enter x and y:" << endl;
            cin >> x >> y;
            Triangle t(x, y);
            ptr = &t;
            ptr->display();
            cout << "Area of triangle is " << ptr->display_area() << endl;
        }
        else
        {
            cout << "Invalid Choice!" << endl;
        }
        cout << "Do you want to continue?(y for yes)" << endl;
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}

// Output:

// 1.Rectangle
// 2.Triangle
// Enter your choice
// 1
// Enter x and y:
// 3 9
// Rectangle created
// x = 3
// y = 9
// Area of rectangle is 27
// Do you want to continue?(y for yes)
// y
// 1.Rectangle
// 2.Triangle
// Enter your choice
// 2 
// Enter x and y:
// 8 4
// Triangle created
// x = 8
// y = 4
// Area of triangle is 16
// Do you want to continue?(y for yes)
// Y
// 1.Rectangle
// 2.Triangle
// Enter your choice
// 3
// Invalid Choice!
// Do you want to continue?(y for yes)
// n