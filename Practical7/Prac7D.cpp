#include <iostream>
using namespace std;

class Vehicle
{
protected:
    int year;
    float price;

public:
    Vehicle(int y = 0, float p = 0.00)
    {
        year = y;
        price = p;
    }

    virtual void display()
    {
        cout << "Manufacturing Year: " << year << endl;
        cout << "Vehicle Price: " << price << endl;
    }

    virtual float calculate()
    {
        return 0;
    }
};

class Bus : public Vehicle
{
protected:
    int seating_cap;
    float price_per_seat;

public:
    Bus(int y = 0, float p = 0.0, int seats = 0, float sp = 0.0)
        : Vehicle(y, p)
    {
        seating_cap = seats;
        price_per_seat = sp;
    }

    void display()
    {
        Vehicle::display();
        cout << "Seating Capacity: " << seating_cap << endl;
        cout << "Price per seat: " << price_per_seat << endl;
    }

    float calculate()
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
    Truck(int y = 0, float p = 0.0, int load = 0, float ip = 0.0)
        : Vehicle(y, p)
    {
        loading_cap = load;
        price_per_item = ip;
    }

    void display()
    {
        Vehicle::display();
        cout << "Loading Capacity: " << loading_cap << endl;
        cout << "Price per item: " << price_per_item << endl;
    }

    float calculate()
    {
        return loading_cap * price_per_item;
    }
};

int main()
{
    char ch;

    do
    {
        int choice;

        cout << "\n1. Bus";
        cout << "\n2. Truck";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int year, seats;
            float price, pricePerSeat;

            cout << "Enter manufacturing year, price, seating capacity and price per seat: "
                 << endl;

            cin >> year >> price >> seats >> pricePerSeat;

            Bus b(year, price, seats, pricePerSeat);

            Vehicle *v = &b;

            v->display();

            cout << "Total Price of All Seats: "
                 << v->calculate() << endl;
        }
        else if (choice == 2)
        {
            int year, loading;
            float price, pricePerItem;

            cout << "Enter manufacturing year, price, loading capacity and price per item: "
                 << endl;

            cin >> year >> price >> loading >> pricePerItem;

            Truck t(year, price, loading, pricePerItem);

            Vehicle *v = &t;

            v->display();

            cout << "Total Price of All Loaded Items: "
                 << v->calculate() << endl;
        }
        else
        {
            cout << "Invalid choice!" << endl;
        }

        cout << "\nDo you want to continue? (y for yes)"
             << endl;

        cin >> ch;

    } while (ch == 'y' || ch == 'Y');

    return 0;
}

// Output:


// 1. Bus
// 2. Truck
// Enter your choice: 1
// Enter manufacturing year, price, seating capacity and price per seat: 
// 2020
// 500000
// 40
// 100
// Manufacturing Year: 2020
// Vehicle Price: 500000
// Seating Capacity: 40
// Price per seat: 100
// Total Price of All Seats: 4000

// Do you want to continue? (y for yes)
// y

// 1. Bus
// 2. Truck
// Enter your choice: 2
// Enter manufacturing year, price, loading capacity and price per item: 
// 2022
// 500000
// 80
// 30
// Manufacturing Year: 2022
// Vehicle Price: 500000
// Loading Capacity: 80
// Price per item: 30
// Total Price of All Loaded Items: 2400

// Do you want to continue? (y for yes)
// Y 

// 1. Bus
// 2. Truck
// Enter your choice: 3
// Invalid choice!

// Do you want to continue? (y for yes)
// n