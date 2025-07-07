#include<iostream>
using namespace std;

void print_till_n(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    print_till_n(n-1);
}

void print_1_to_n(int n){
    if(n<1){
        return;
    }
    print_1_to_n(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    print_1_to_n(n);
    // print_till_n(n);
}