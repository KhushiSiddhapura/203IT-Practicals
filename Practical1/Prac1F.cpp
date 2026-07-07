#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0, a, b, digit = 0;

    cout << "Enter a number" << endl;
    cin >> num;
    a = num;
    while (a > 0)
    {
        a /= 10;
        digit++;
    }
    b = num;
    while (b > 0)
    {
        int x = b % 10;
        int res = 1;
        for (int i = 0; i < digit; i++)
        {
            res *= x;
        }
        sum += res;
        b /= 10;
    }
    if(num == sum) {
        cout<<num<<" is armstrong number!"<<endl;
    } else {
        cout<<num<<" is not armstrong number!"<<endl;
    }
    return 0;
}