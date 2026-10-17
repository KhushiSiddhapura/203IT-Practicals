#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file1;
    ofstream file2;
    file1.open("Prac10A1.txt");
    file2.open("Prac10A2.txt");
    while (!file1.eof())
    {
        char ch = file1.get();
        cout << ch;
        file2.put(ch);
    }
    file1.close();
    file2.close();
    return 0;
}

// Output: 

// Hello!!
// I am Khushi Siddhapura. 