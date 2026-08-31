#include <iostream>
using namespace std;

class Count
{
    static int count;

public:
    Count()
    {
        count++;
    }
    static int showCount()
    {
        return count;
    }
};

int Count::count = 0;

int main()
{
    Count c[132];
    Count::showCount();
    cout << Count::showCount() << " time object is created!" << endl;
    return 0;
}