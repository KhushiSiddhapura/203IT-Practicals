#include <iostream>
#include <math.h>
using namespace std;

float my_sqrt(float n)
{
    if (n < 0)
    {
        throw 1;
    }
    return sqrt(n);
}

int main()
{
    char choice;
    do
    {
        float n;
        try
        {
            cout << "Enter a number: ";
            cin >> n;
            cout << "Square root: " << my_sqrt(n) << endl;
        }
        catch (int i)
        {
            cout << "Square Root failed:Negative value" << endl;
        }
        cout << "Do you want to continue? (y for yes) " << endl;
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    return 0;
}

// Output:

// Enter a number: 7
// Square root: 2.64575
// Do you want to continue? (y for yes) 
// y
// Enter a number: 0
// Square root: 0
// Do you want to continue? (y for yes) 
// Y
// Enter a number: -3
// Square Root failed:Negative value
// Do you want to continue? (y for yes) 
// n