#include<bits/stdc++.h>
using namespace std;
const int N=1e7+7; //we can not use this funda for 1e9;
int hsh[N]; //by default each element of array would be zero;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        hsh[arr[i]]++;
    }
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<hsh[x]<<"\n";
    }
}