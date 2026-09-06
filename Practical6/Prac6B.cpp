#include <iostream>
#include <string>
using namespace std;

class MyString
{
private:
    string str;

public:
    MyString(string s = "")
    {
        str = s;
    }

    MyString operator+(const MyString &obj)
    {
        string temp = str + obj.str;
        return MyString(temp);
    }

    void display()
    {
        cout << str;
    }
};

int main()
{
    MyString s1("Hello, ");
    MyString s2("World!");

    MyString s3 = s1 + s2;

    cout << "String 1: ";
    s1.display();
    cout << "\nString 2: ";
    s2.display();

    cout << "\nString 3: ";
    s3.display();
    cout << endl;

    return 0;
}