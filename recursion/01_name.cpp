#include<iostream>
using namespace std;

void print_name(string str,int count){
    if(count == 0)
    return;

    cout<<str<<endl;
    print_name(str,count-1);
}

int main(){
    int n=5;
    string str = "Arpit";
    print_name(str,n);
}