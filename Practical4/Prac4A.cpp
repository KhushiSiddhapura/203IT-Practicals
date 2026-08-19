#include<iostream>
using namespace std;

class B;
class A{
    int a;
    public:
        void setData(){
            cout<<"Enter Value of a: "<<endl;
            cin>>a;
        }
        void display(){
            cout<<"a = "<<a<<endl;
        }
        friend void swapping(A &,B &);
};

class B{
    int b;
    public:
        void setData(){
            cout<<"Enter Value of b: "<<endl;
            cin>>b;
        }
        void display(){
            cout<<"b = "<<b<<endl;
        }
        friend void swapping(A &,B &);
};

void swapping(A &x, B &y){
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}

int main(){
    A a;
    B b;
    a.setData();
    b.setData();
    a.display();
    b.display();
    swapping(a,b);
    a.display();
    b.display();
    return 0;
}