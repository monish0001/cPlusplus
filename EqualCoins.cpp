#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int x=0,y=0;
        cin>>x>>y;
        if(x==0 && y%2!=0)
            cout<<"No\n";
        else if((x+y)%2==0)
            cout<<"YES\n";
        else
            cout<<"No\n";
    }
}