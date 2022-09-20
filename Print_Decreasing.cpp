#include<iostream>
using namespace std;
void dec(int n){
    if(n == 0){
        return ;
    }
    cout<<n<<"  ";
    dec(n-1);
}
void increment(int n){
    if(n==0){
        return;
    }
    increment(n-1);
    cout<<n<<"   ";
    }

int main(){
    int n;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    dec(n);
    cout<<endl;;
    increment(n);
return 0;
}