//Call by Value
#include<iostream>
using namespace std;

void swap(int x,int y){
    int temp= x;
    x=y;
    y=temp;

    cout<<"Inside the function\nX="<<x<<"\nY="<<y<<endl;
}

int main(){
    int x,y;

    cout<<"Enter value of X and Y: "<<endl;
    cin>>x>>y;
    cout<<"Before swaping\nX="<<x<<"\nY="<<y<<endl;

    swap(x,y);

    cout<<"After swap function call\nX="<<x<<"\nY="<<y<<endl;

    return 0;
}