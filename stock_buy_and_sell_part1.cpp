#include<iostream>
#include<algorithm>
#define N 5
using namespace std;

int maxProfit(int a[]){
    int maxprofit=0;
    int minprofit=a[0];
    int minSoFar;

    for(int i=0;i<N;i++){
        minSoFar = min(minSoFar,a[i]);
        int profit = a[i] - minSoFar;
        maxprofit = max(maxprofit,profit);
    }

    return maxprofit;
}

int main(){
    int a[N];
    cout<<"enter five random stocks values : ";

    for(int i=0;i<N;i++)
        cin>>a[i];
    
    cout<<"Processing . . . .\n";
    cout<<maxProfit(a);

    return 0;
}