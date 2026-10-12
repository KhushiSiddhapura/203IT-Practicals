#include <iostream>
using namespace std;

class Shape
{
protected:
    float x, y;

public:
    void getData()
    {
        cout << "Enter value of x and y" << endl;
        cin >> x >> y;
    }
    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
    virtual int display_area()
    {
        return 0;
    }
};

class Rectangle : public Shape
{
    int display_area()
    {
        return x * y;
    }
};

class Triangle : public Shape
{
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
            Rectangle r;
            ptr = &r;
            ptr->getData();
            ptr->display();
            cout << "Area of rectangle is " << ptr->display_area() << endl;
        }
        else if (ch == 2)
        {
            Triangle t;
            ptr = &t;
            ptr->getData();
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
// Enter value of x and y
// 3 6
// x = 3
// y = 6
// Area of rectangle is 18
// Do you want to continue?(y for yes)
// y
// 1.Rectangle
// 2.Triangle
// Enter your choice
// 2
// Enter value of x and y
// 4 5
// x = 4
// y = 5
// Area of triangle is 10
// Do you want to continue?(y for yes)
// y
// 1.Rectangle
// 2.Triangle
// Enter your choice
// 3
// Invalid Choice!
// Do you want to continue?(y for yes)
// n