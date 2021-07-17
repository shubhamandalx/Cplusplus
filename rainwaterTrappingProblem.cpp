#include<iostream>
#include<algorithm>
#define N 12

using namespace std;

void rainwater(int a[]){
    int left[N];
    int right[N];
    int water=0;
    
    left[0]=a[0];
    for(int i=1;i<N;i++)
        left[i]=max(left[i-1],a[i]);
    
    right[N-1]=a[N-1];
    for(int i=N-2;i>=0;i--)
        right[i]=max(right[i+1],a[i]);

    for(int i=0;i<N;i++)
        water+= min(left[i],right[i]) - a[i];


    cout<<water;

    
}

int main(){
    int a[N];
    cout<<"Enter five numbers : ";
    
    for(int i=0;i<N;i++)
        cin>>a[i];

    rainwater(a);

    return 0;
}