#include<iostream>
#include<iomanip>
using namespace std;

ostream &format(ostream &out){
    out<<fixed<<setprecision(2);
    return out;
}
ostream &rupee(ostream &out){
    out<<" rupees"<<endl;
    return out;
}

int main(){
    float m;
    cout<<"Enter Money:";
    cin>>m;
    cout<<format<<m<<rupee;
    return 0;
}

// Output:

// Enter Money:147.3
// 147.30 rupees