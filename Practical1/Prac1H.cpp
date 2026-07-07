#include <iostream>
using namespace std;

int main()
{
    int num[10];
    cout << "Enter 10 numbers: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }
    for (int j = 0; j < 10; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            if (num[i] > num[i + 1])
            {
                int temp = num[i];
                num[i] = num[i + 1];
                num[i + 1] = temp;
            }
        }
    }

    cout << "Sorted in ascending order: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}