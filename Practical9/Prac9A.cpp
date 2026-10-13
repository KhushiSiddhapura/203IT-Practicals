#include <iostream>
#include <iomanip>
using namespace std;

class Item
{
    int code;
    string name;
    float cost;

public:
    Item() {}
    Item(int id, string n, float c)
    {
        code = id;
        name = n;
        cost = c;
    }
    void display()
    {
        cout << setiosflags(ios::left) << setw(6) << code << resetiosflags(ios::left);
        cout << "|" << setiosflags(ios::left) << setw(25) << name << resetiosflags(ios::left);
        cout << "|" << setiosflags(ios::fixed) << setprecision(2) << setw(6) << cost << resetiosflags(ios::fixed) << endl;
    }
    float getCost()
    {
        return cost;
    }
};

int main()
{
    int n;
    cout << "Enter number of Items:";
    cin >> n;
    Item it[n];
    float total = 0.0;
    for (int i = 0; i < n; i++)
    {
        int id;
        string name;
        float price;
        cout << "Enter Item Code, Name and Cost:" << endl;
        cin >> id >> name >> price;
        it[i] = Item(id, name, price);
        total += it[i].getCost();
    }

    cout << setiosflags(ios::left) << setw(6) << "Code" << resetiosflags(ios::left);
    cout << "|" << setiosflags(ios::left) << setw(25) << "Name" << resetiosflags(ios::left);
    cout << "|" << setw(6) << "Price" << endl;
    cout << "---------------------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        it[i].display();
    }
    cout << "---------------------------------------" << endl;
    cout << setw(6) << "" << setw(26) << "Total Price" << "|" << setw(6) << setiosflags(ios::fixed) << setprecision(2) << total << endl;
    return 0;
}

// Output:

// Enter number of Items:3
// Enter Item Code, Name and Cost:
// 101
// Rice
// 34.56
// Enter Item Code, Name and Cost:
// 102
// Wheat
// 45
// Enter Item Code, Name and Cost:
// 103
// Tea
// 12.4
// Code  |Name                     | Price
// ---------------------------------------
// 101   |Rice                     | 34.56
// 102   |Wheat                    | 45.00
// 103   |Tea                      | 12.40
// ---------------------------------------
//                      Total Price| 91.96