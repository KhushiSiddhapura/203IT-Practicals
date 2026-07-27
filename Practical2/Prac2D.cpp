#include <iostream>
using namespace std;

int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > c && b > a)
    {
        return b;
    }
    else
    {
        return c;
    }
}

string max(string a, string b, string c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > c && b > a)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a, b, c;
    string x, y, z;
    cout << "Enter three integer values:" << endl;
    cin >> a >> b >> c;
    cout << "Maximum Number: " << max(a, b, c) << endl;
    cout << "Enter three strings:" << endl;
    cin >> x >> y >> z;
    cout << "Maximum String: " << max(x, y, z) << endl;

    return 0;
}