#include <iostream>
using namespace std;

float areaOfCircle(float r, float PI = 3.1415){
    return PI*r*r;
}

    int main()
{
    float area, radius;

    cout << "Enter radius of circle:" << endl;
    cin >> radius;
    area = areaOfCircle(radius);
    cout<<"Area of Circle is: "<<area<<endl;

    return 0;
}

// Output:

// Enter radius of circle:
// 5
// Area of Circle is: 78.5375