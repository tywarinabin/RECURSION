#include<bits/stdc++.h>
using namespace std;
void defination(){
    cout<<"The process of breaking down the problems into smaller problems and call by the function itself is called  RECURSION ";
    cout<<"For each function call, A stack of memory is allocated .";
}
/*
                                         Let n = 4 then p = 3 The output will be 64

*/
int power(int n,int p){
    if(p ==0){
        return 1;
    }
    int prevsum = power(n,p-1);
    return n * power(n,p-1);
}
// To print sum upto N numbers

  /*  




  
  int sum (int n){
    if(n ==0){
        return 0;
    }
    int beforeSum = sum(n-1);
    return n+beforeSum;
  }
  
  
  */
int main(){
  int n,p;
  cin>>p;
  cin>>n;
  cout<<sum(n,p);
return 0;
}