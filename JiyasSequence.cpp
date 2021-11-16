#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,Least_significant,d=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        if(j==0){
            d=arr[j];
            continue;
        }
        d=d*1LL*arr[j];
    }
    while(d>0){
        Least_significant=d%10;
        d=d/10;
    }
    if(Least_significant==2||Least_significant==3||Least_significant==5){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    
}