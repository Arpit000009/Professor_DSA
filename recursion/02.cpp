#include<iostream>
using namespace std;

void print_till_n(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    print_till_n(n-1);
}

int main(){
    int n;
    cin>>n;

    print_till_n(n);
}