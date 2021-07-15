#include<iostream>
using namespace std;

void sieve(int n){
    int prime[500]={0};
    for(int i =2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }

    }// For Marking the non-prime numbers

    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<< ' ';
        }
    }cout<<endl;



}

int main(){
    int n;
    cout<<"Enter the no. till where you want prime numbers : ";
    cin>>n;
    cout<<"Hence, the prime no. between them are given :\n";
    sieve(n);

    return 0;
}