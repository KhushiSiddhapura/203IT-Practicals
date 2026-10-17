#include <iostream>
using namespace std;

template <class T>
class MyArray
{
    T element[10];

public:
    MyArray()
    {
        cout << "Enter 10 elements in Array:" << endl;
        for (int i = 0; i < 10; i++)
        {
            cin >> element[i];
        }
    }
    void display()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << "ELement " << i + 1 << ": " << element[i] << endl;
        }
    }
    void sort()
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 9 - i; j++)
            {
                if (element[j] > element[j + 1])
                {
                    T temp = element[j];
                    element[j] = element[j + 1];
                    element[j + 1] = temp;
                }
            }
        }
    }
    T find_max()
    {
        T max = element[0];
        for (int i = 1; i < 10; i++)
        {
            if (element[i] > max)
            {
                max = element[i];
            }
        }
        return max;
    }
};

int main()
{
    char choice;
    do
    {
        int ch;
        cout << "1. Integer" << endl;
        cout << "2. String" << endl;
        cout << "Enter choice: " << endl;
        cin >> ch;
        if (ch == 1)
        {
            MyArray<int> arr;
            arr.display();
            cout << "Maximum Element: " << arr.find_max() << endl;
            cout << "Sorted Array:" << endl;
            arr.sort();
            arr.display();
        }
        else if (ch == 2)
        {
            MyArray<string> arr;
            arr.display();
            cout << "Maximum Element: " << arr.find_max() << endl;
            cout << "Sorted Array:" << endl;
            arr.sort();
            arr.display();
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
        cout << "Do you want to continue? (y for yes)" << endl;
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    return 0;
}

// Output:

// 1. Integer
// 2. String
// Enter choice: 
// 1
// Enter 10 elements in Array:
// 45 -12 0 999 -500 45 128 -1 999 7
// ELement 1: 45
// ELement 2: -12
// ELement 3: 0
// ELement 4: 999
// ELement 5: -500
// ELement 6: 45
// ELement 7: 128
// ELement 8: -1
// ELement 9: 999
// ELement 10: 7
// Maximum Element: 999
// Sorted Array:
// ELement 1: -500
// ELement 2: -12
// ELement 3: -1
// ELement 4: 0
// ELement 5: 7
// ELement 6: 45
// ELement 7: 45
// ELement 8: 128
// ELement 9: 999
// ELement 10: 999
// Do you want to continue? (y for yes)
// y
// 1. Integer
// 2. String
// Enter choice: 
// 2
// Enter 10 elements in Array:
// mango Apple zebra apple Banana ZEBRA orange kiwi Grapes banana
// ELement 1: mango
// ELement 2: Apple
// ELement 3: zebra
// ELement 4: apple
// ELement 5: Banana
// ELement 6: ZEBRA
// ELement 7: orange
// ELement 8: kiwi
// ELement 9: Grapes
// ELement 10: banana
// Maximum Element: zebra
// Sorted Array:
// ELement 1: Apple
// ELement 2: Banana
// ELement 3: Grapes
// ELement 4: ZEBRA
// ELement 5: apple
// ELement 6: banana
// ELement 7: kiwi
// ELement 8: mango
// ELement 9: orange
// ELement 10: zebra
// Do you want to continue? (y for yes)
// Y
// 1. Integer
// 2. String
// Enter choice: 
// 3
// Invalid Choice
// Do you want to continue? (y for yes)
// n