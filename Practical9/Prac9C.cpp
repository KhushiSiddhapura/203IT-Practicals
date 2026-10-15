#include<iostream>
using namespace std;

template <class T>
void swapNum(T &n1,T &n2){
    T temp = n1;
    n1= n2;
    n2 = temp;
}

int main(){
    char ch;
    do{
        int choice;
        cout<<"1. To swap intereger values:"<<endl;
        cout<<"2. To swap float values:"<<endl;
        cout<<"Enter.."<<endl;
        cin>>choice;
        if(choice == 1){
            int a,b;
            cout<<"Enter two integer values:"<<endl;
            cin>>a>>b;
            cout<<"Before swapping:"<<endl;
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
            swapNum(a,b);
            cout<<"After swapping:"<<endl;
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        } else if(choice == 2){
            float a,b;
            cout<<"Enter two float values:"<<endl;
            cin>>a>>b;
            cout<<"Before swapping:"<<endl;
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
            swapNum(a,b);
            cout<<"After swapping:"<<endl;
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        } else {
            cout<<"Invalid choice!"<<endl;
        }
        cout<<"Do you want to continue?(y for yes)"<<endl;
        cin>>ch;
    } while (ch == 'y'||ch == 'Y');
    return 0;
}

// Output:

// 1. To swap intereger values:
// 2. To swap float values:
// Enter..
// 1
// Enter two integer values:
// 23 65
// Before swapping:
// a = 23
// b = 65
// After swapping:
// a = 65
// b = 23
// Do you want to continue?(y for yes)
// y
// 1. To swap intereger values:
// 2. To swap float values:
// Enter..
// 2
// Enter two float values:
// 34.7
// 23.7643
// Before swapping:
// a = 34.7
// b = 23.7643
// After swapping:
// a = 23.7643
// b = 34.7
// Do you want to continue?(y for yes)
// Y
// 1. To swap intereger values:
// 2. To swap float values:
// Enter..
// 3
// Invalid choice!
// Do you want to continue?(y for yes)
// n