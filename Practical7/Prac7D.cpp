#include <iostream>
using namespace std;

class Vehicle
{
protected:
    int year;
    float price;

public:
    Vehicle(int y = 0, float pr = 0.00)
    {
        year = y;
        price = pr;
    }
    void displayV()
    {
        cout << "Manufacturing year: " << year << endl;
        cout << "Price: " << price << endl;
    }
};

class Bus : public Vehicle
{
protected:
    int seating_cap;
    float price_per_seat;

public:
    Bus(int y = 0, float pr = 0.00, int seats = 0, float s_pr = 0.00) : Vehicle(y, pr)
    {
        seating_cap = seats;
        price_per_seat = s_pr;
    }
    void displayB()
    {
        displayV();
        cout << "Seating capacity: " << seating_cap << endl;
        cout << "Price per seat: " << price_per_seat << endl;
    }
    float calculateS()
    {
        return seating_cap * price_per_seat;
    }
};

class Truck : public Vehicle
{
protected:
    int loading_cap;
    float price_per_item;

public:
    Truck(int y = 0, float pr = 0.00, int load = 0, float l_pr = 0.00) : Vehicle(y, pr)
    {
        loading_cap = load;
        price_per_item = l_pr;
    }
    void displayT()
    {
        displayV();
        cout << "Loading Capacity: " << loading_cap << endl;
        cout << "Price per item: " << price_per_item << endl;
    }
    float calculateT()
    {
        return loading_cap * price_per_item;
    }
};

int main()
{
    char choice;
    do
    {
        int ch;
        cout << "Enter.." << endl;
        cout << "1. To enter data of Bus" << endl;
        cout << "2. To enter data of Truck" << endl;
        cin >> ch;
        if (ch == 1)
        {
            int y, cp;
            float pr, s_pr;
            cout << "Enter Manufacturing year, price, seat capacity and price per seat:" << endl;
            cin >> y >> pr >> cp >> s_pr;
            Bus B(y, pr, cp, s_pr);
            cout << "Total Price of all seats: " << B.calculateS() << endl;
        }
        else if (ch == 2)
        {
            int y, cp;
            float pr, i_pr;
            cout << "Enter manufacturing year, price, loading capacity and price per item: " << endl;
            cin >> y >> pr >> cp >> i_pr;
            Truck T(y, pr, cp, i_pr);
            cout << "Total Price of loading all items: " << T.calculateT() << endl;
        }
        else
        {
            cout << "Invalid Choice!" << endl;
        }
        cout << "Do you want to continue?(y for yes)" << endl;
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}