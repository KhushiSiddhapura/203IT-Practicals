#include <iostream>
using namespace std;

inline float simpleInterest(float p, float r, float n)
{
    return (p * r * n) / 100;
}

int main()
{
    float p, r, n, interest;

    cout << "Enter Principle Amount:" << endl;
    cin >> p;
    cout << "Enter Interest Rate:" << endl;
    cin >> r;
    cout << "Enter time period (in years):" << endl;
    cin >> n;

    interest = simpleInterest(p, r, n);

    cout << "Simple Interest: " << interest << endl;
    return 0;
}