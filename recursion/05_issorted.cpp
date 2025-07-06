#include<iostream>
using namespace std;

bool issorted(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }

    return (arr[n-1]>=arr[n-2] && issorted(arr,n-1));
}

int main(){
    int n = 8;
    int arr[n] = {1,1,1,1,1,1,1,1};
    if(issorted(arr,n)){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
}