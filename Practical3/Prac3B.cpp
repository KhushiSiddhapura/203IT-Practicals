#include <iostream>
using namespace std;

class Account
{
    string name;
    int acc_no;
    float balance;

public:
    void getData()
    {
        cout << "Enter Account Number:" << endl;
        cin >> acc_no;
        cout << "Enter Account Holder Name:" << endl;
        cin >> name;
        cout << "Enter Account Balance:" << endl;
        cin >> balance;
    }

    void displayData()
    {
        cout << "Accout Holder Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(int acc, float amount)
    {
        if (acc_no == acc)
        {
            if (amount > 0)
            {
                balance += amount;
                cout << "Total Balance after deposit: " << balance << endl;
            }
            else
            {
                cout << "Deposit amount should be greater than 0" << endl;
            }
        }
    }

    void withdraw(int acc, float amount)
    {
        if (acc_no == acc)
        {
            if (amount)
            {
                if (balance > amount)
                {
                    balance -= amount;
                    cout << "Balance After withdrawing amount: " << balance << endl;
                }
                else
                {
                    cout << "Insufficient Balance in Account" << endl;
                }
            }
            else
            {
                cout << "Withdraw amount should be greater than 0" << endl;
            }
        }
    }

    void data(int acc)
    {
        if (acc_no == acc)
        {
            displayData();
        }
    }
};

int main()
{
    int n;
    cout << "Enter number of accounts: " << endl;
    cin >> n;
    Account a[n];
    for (int i = 0; i < n; i++)
    {
        a[i].getData();
    }
    float deposit, withdraw;
    int d_acc, w_acc;
    cout << "Enter account number in which you want to deposit money and amount of money you want to deposit" << endl;
    cin >> d_acc >> deposit;
    for (int i = 0; i < n; i++)
    {
        a[i].deposit(d_acc, deposit);
    }
    cout << "Enter account number from which you want to withdraw money and amount of money you want to withdraw" << endl;
    cin >> w_acc >> withdraw;
    for (int i = 0; i < n; i++)
    {
        a[i].withdraw(w_acc, withdraw);
    }

    int acc;
    cout << "Enter account number to see data:" << endl;
    cin >> acc;
    for (int i = 0; i < n; i++)
    {
        a[i].data(acc);
    }
}