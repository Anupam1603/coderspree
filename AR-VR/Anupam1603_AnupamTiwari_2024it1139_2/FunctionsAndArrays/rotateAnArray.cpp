#include<bits/stdc++.h>
using namespace std;

void rotate(int* arr, int n, int k){
   k=k%n;
   if(k<0){
       k=k+n;
   }
   reverse(arr,arr+n);
   reverse(arr,arr+k);
   reverse(arr+k,arr+n);
    
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, r;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    cin>>r;
    
    rotate(arr,n,r);
    display(arr,n);
}
