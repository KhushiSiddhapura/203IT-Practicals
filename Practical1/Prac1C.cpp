#include<iostream>
using namespace std;

int main(){
    float f,c;
    cout<<"Enter temperature in Fahrenheit: "<<endl;
    cin>>f;

    c = (f-32)/1.8;

    cout<<"Celcius: "<<c<<endl;

    return 0;
}