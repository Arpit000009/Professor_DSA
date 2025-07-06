#include<iostream>
using namespace std;

int factorial(int n){

    //simpler way
    if(n==0){
        return 1;
    }
    
    return n*factorial(n-1);
}

int fact(int n){
    if(n==0){
        return 1;
    }
    static int ans = 1;
    if(n==1){
        return ans;
    }
    ans = ans*n;
    fact(n-1);

}

int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    cout<<factorial(n);
}