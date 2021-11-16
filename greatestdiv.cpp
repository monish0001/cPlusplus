#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,higDiv;
    cin>>n;
    for(int i=2;i<=10;i++){
        if(n%i==0){
            higDiv=i;
        }
    }
    cout<<higDiv;
}