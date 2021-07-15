#include<iostream>
using namespace std;

int zero(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5)
        res=res+n/i;
    return res;
}

int main(){
    int n;
    cout<<"Enter the Factorial : ";
    cin>>n;
    cout<<"Hence, the no. of zeros : "<<zero(n)<<endl;

    return 0;
}