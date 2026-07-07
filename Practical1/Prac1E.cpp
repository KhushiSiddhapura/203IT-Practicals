#include<iostream>
using namespace std;

int main(){
    int marks[6],total=0;
    cout<<"Enter Marks of 6 subjects: "<<endl;
    for(int i=0;i<6;i++){
        cin>>marks[i];
        total+=marks[i];
    }
    cout<<"Total Marks: "<<total<<endl;

    return 0;
}