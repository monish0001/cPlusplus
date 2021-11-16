#include<bits/stdc++.h>
using namespace std;

int main(){
        int N,K,ti,count=0;
    cin>>N>>K;
    while (N--)
    {   cin>>ti;
        if(ti%K==0) count++;
    }
    cout<<count;
    return 0;
    
}