#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n == 0){
        return 0;
    }
// First find the sum upto n-1 then add with n.
    else{
        int previouSum = sum(n-1);
        return n+previouSum;
    }
}
int factorial(int n ){
    if(n == 1){
        return 1;
    }
    // First find the multiple upto n-1 then simply multiply with n.
    else{
        int previouMultiple = factorial(n-1);
        return n*previouMultiple;
    }
}
int main(){
int n;
cout<<"Enter Number : "<<endl;
cin>>n;
char x;
cout<<"Enter : "<<endl;
printf("\t \t'S' for sum upto %d  : \t \n ",n);
printf("\t \t'F' for factorial of %d  : \t \n ",n);
cin>>x;
switch(x){
    case 'S':
    cout<<sum(n)<<endl;
    break;
    case 'F':
    cout<<factorial(n)<<endl;
    break;
    default:
    cout<<"\t\tInvalid Key\t\t"<<endl;
}
return 0;
}