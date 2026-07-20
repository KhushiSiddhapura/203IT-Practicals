#include <iostream>
using namespace std;

void increase(int &x)
{
    ++x;
}

int main()
{
    int count = 0;
    cout << "Before count increse, count: " << count << endl;
    increase(count);
    cout << "After count increse, count: " << count << endl;

    return 0;
}