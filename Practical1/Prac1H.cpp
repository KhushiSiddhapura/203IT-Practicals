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

// Output: 

// Enter 10 numbers: 
// 9 8 7 6 5 4 3 2 1 0 
// Sorted in ascending order: 
// 0 1 2 3 4 5 6 7 8 9 