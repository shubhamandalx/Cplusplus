#include<iostream>
# define N 5
using namespace std;

void kadane(int a[]){
    int maxSum=0;
    int curSum=0;

    for(int i=0;i<N;i++){
        curSum  =   curSum  +   a[i];
        
        if(curSum>maxSum){
            maxSum=curSum;
        }

        if(curSum<0){
            curSum=0;
        }
    }
    cout<<maxSum;
}

int main(){
    int a[N];
    cout<<"Enter the five array's : ";

    for (int i=0;i<N;i++){
        cin>>a[i];
    }

    cout<<"Process started . . . \n";
    kadane(a);

    return 0;

}