#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,index=0;
    cin>>n;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];

    }
    for (int k = n-1; k>=0; k--)
    {
        arr2[index]=arr1[k];
        index++;
    }
    
    for(int j=0;j<n;j++ ){
        cout<<arr2[j]<<" ";
    }
}