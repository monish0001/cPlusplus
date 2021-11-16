#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision;

int main(){
    int t;cin>>t;
    while(t--){
    int n;cin>>n;
    cpp_int fact=1;
     if(n==0){
	    cout<<n<<"\n";
     }else{
       for(int i=1;i<=n;i++){
           fact=fact*i;
       }
       cout<<fact<<"\n";
     }
    }

    return 0;
}