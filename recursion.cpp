#include<iostream>
using namespace std;

void hello(int n){
    if (n==0)
        return;
    cout<<"hello"<<endl;
    return hello(n-1);
}

int main(){
    int n;
    cout<<"Enter the no. :";
    cin>>n;
    hello(n);
}