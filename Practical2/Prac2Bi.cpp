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

// Output:

// Enter value of X and Y: 
// 4 6
// Before swaping
// X=4
// Y=6
// Inside the function
// X=6
// Y=4
// After swap function call
// X=4
// Y=6