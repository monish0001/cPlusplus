#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
    int N,count=0;
    cin>>N;
        while (N>=100){
            N=N-100;count++;
        }
        while (N>=50){
            N=N-50;count++;
        }
        while (N>=10){
            N=N-10;count++;
        }
        while (N>=5){
            N=N-5;count++;
        }
        while (N>=2){
            N=N-2;count++;
        }
        if(N==1)count++;

        cout<<count<<"\n";
    }
    return 0;
    
}