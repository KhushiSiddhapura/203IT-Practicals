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
        int flag = 1;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << n << " is prime number" << endl;
        }
        else
        {
            cout << n << " is not prime number" << endl;
        }
    }
};

int main(){
    Num number;

    return 0;
}