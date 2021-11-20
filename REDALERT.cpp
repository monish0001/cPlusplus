#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
    int N,D,H,A,WL=0;
    cin>>N>>D>>H;
    bool flag=0;
    int arr[N];
    for(int i = 0; i < N; i++)
    {
       cin>>A;
       if(A>0){
           WL+=A;
       }else if(A==0&&D>WL){
           WL=0;

       }else{
           WL-=D;
       }
       arr[i]=WL;
    }
    for (int i = 0; i < N; i++)
    {
        if(arr[i]>H) flag=1;
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    }
    
    return 0;
}