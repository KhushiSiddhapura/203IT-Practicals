#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter range of prime numbers: "<<endl;
    cin>>num;

    for(int i = 2;i<num;i++) {
        int flag = 1;
        for(int j = 2;j<i;j++){
            if(i%j==0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            cout<<i<<endl;
        }
    }

    return 0;
}