#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int q=0;
    cin>>q;
    while(q--){
        int x,count=0;
        cin>>x;
        
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==x){
                count++;
            }
        }
        
        cout<<count<<"\n";
    }

    return 0;
}