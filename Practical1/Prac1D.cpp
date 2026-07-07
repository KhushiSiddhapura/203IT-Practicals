#include<iostream>
using namespace std;

int main(){
    int num,sum=0;

    cout<<"Enter a number"<<endl;
    cin>>num;

    while(num>0){
        sum+=num%10;
        num/=10;
    }

    cout<<"Sum of Each digit: "<<sum<<endl;
    return 0;
}