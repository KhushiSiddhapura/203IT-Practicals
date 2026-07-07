#include<iostream>
using namespace std;

int main(){
    int a,b,operation,result;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter number for operation"<<endl;
    cin>>operation;
    if(operation==1){
        result = a+b;
    } else if(operation==2){
        result = a-b;
    } else  if(operation == 3){
        result = a*b;
    } else if(operation ==4) {
        if(b!=0){
            result = a/b;
        } else {
            cout<<"Number cannot be divided by 0"<<endl;
            return 0;
        }
    } else {
        cout<<"Incorrect number entered for operator choice!!"<<endl;
        return 0;
    }
    cout<<"Result: "<<result<<endl;
    return 0;
}