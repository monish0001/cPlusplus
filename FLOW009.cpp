#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
    double quantity,price,discount;
    double totalExpenses;
    cin>>quantity>>price;
    totalExpenses=quantity*price;
    if(quantity>1000){
    discount=(quantity*price*10)/100;
    totalExpenses-=discount;
    }
    cout<<fixed << setprecision(6)<<totalExpenses<<"\n";
    }
}