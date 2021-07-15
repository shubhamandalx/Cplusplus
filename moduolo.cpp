#include<iostream>
using namespace std;
//wrong code 

int main(){
    int n;
    cout<<"ENter the no. : ";
    cin>>n;
    long long fact=1;
    int M =47;

    for(int i =2;i<=n;++i){
        fact=(fact*i)%M;
    }
    cout<<fact<<endl;
}