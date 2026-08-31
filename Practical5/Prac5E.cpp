#include <iostream>
using namespace std;

class Num
{
    int n;

public:
    Num()
    {
        cout << "Enter a number: " << endl;
        cin >> n;
        int res = 1;
        for (int i = n; i > 0; i--)
        {
            res *= i;
        }
        cout << n << " factorial = " << res << endl;
    }
};

int main()
{
    Num number;

    return 0;
}