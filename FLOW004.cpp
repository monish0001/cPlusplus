#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
    int N,lastDigit,firstDigit;
    cin>>N;
    lastDigit=N%10;
    while (N>=10)
    {
        N=N/10;
    }
    firstDigit=N;
    cout<<(lastDigit+firstDigit)<<"\n";
    }
    
}