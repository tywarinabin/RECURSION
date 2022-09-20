#include<bits/stdc++.h>
using namespace std;
/*                  First we have to take one element and check other elements are sorted or not in the list,
 Then continously checking left element with right element and the Size of array is decreasing at each time in 
 each call of the function isSorted ..........*/
bool isSorted(int arr[], int n){
    if(n == 1){
        return true;
    }
    bool nextArray = isSorted(arr+1,n-1);
    return (arr[0]<arr[1] and nextArray);
}
int main(){
 int n;
 cout<<"Enter the size of Array: "<<endl;
 cin>>n;
 int arr[n];
 for(int i  =0;i<n;i++){
    cin>>arr[i];
 } 
 if(isSorted(arr,n)){
    cout<<"The array is sorted"<<endl;
 }
 else
 cout<<"Sorry, your array is not sorted."<<endl;
return 0;
}