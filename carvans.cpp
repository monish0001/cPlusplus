#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
    int n,count=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    int min=arr[0];
     for(int i=1;i<n;i++){
         if(arr[i]<=min){
             count++;
             min=arr[i];
         }
     }cout<<count<<endl;
    }
}