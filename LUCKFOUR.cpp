#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    long long int N;
    while(t--){
        int count=0;
        cin>>N;
        while(N>0){
            int rem=N%10;
                N=N/10;
                if(rem==4)count++;
        }
        cout<<count<<"\n";

    }
    return 0;
}