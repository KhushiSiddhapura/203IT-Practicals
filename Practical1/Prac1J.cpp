#include <iostream>
using namespace std;

inline int max(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}

int main()
{
    int x, y, z, ans;
    cout << "Enter Three integer values :" << endl;
    cin >> x >> y >> z;

    ans = max(x, y, z);

    cout << "Maximum number out of three numbers is: " << ans << endl;

    return 0;
}