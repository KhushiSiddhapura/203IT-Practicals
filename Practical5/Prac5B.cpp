#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:
    Time()
    {
        h = 0;
        m = 0;
        s = 0;
    }
    Time(int x, int y, int z)
    {
        h = x;
        m = y;
        s = z;
    }
    void display()
    {
        cout << "Time: " << h << ":" << m << ":" << s << endl;
    }
    friend Time add(Time, Time);
};

Time add(Time x, Time y)
{
    Time temp;
    int minute, second;
    second = x.s + y.s;
    temp.s = second % 60;
    minute = x.m + y.m + (second / 60);
    temp.m = minute % 60;
    temp.h = x.h + y.h + (minute / 60);
    return temp;
}

int main()
{
    Time t[3];
    for (int i = 0; i < 2; i++)
    {
        int h, m, s;
        cout << "Enter hours, minute and second: " << endl;
        cin >> h >> m >> s;
        t[i] = Time(h, m, s);
        t[i].display();
    }
    t[2] = add(t[0], t[1]);
    t[2].display();
    return 0;
}