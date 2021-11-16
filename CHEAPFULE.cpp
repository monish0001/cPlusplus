#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
    int X,Y,A,B,K;
    cin>>X>>Y>>A>>B>>K;
    for (int i = 1; i <= K; i++)
         X+=A;
    for (int i = 1; i <= K; i++)
         Y+=B;
    if(X<Y)cout<<"PETROL\n";
    else if(X==Y)cout<<"SAME PRICE\n";
    else cout<<"DIESEL\n";
    }

}