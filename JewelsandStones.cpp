#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    string str_j,str_s;
    int count=0;
    cin>>str_j>>str_s;
    for(int i=0;i<str_s.length();i++){
        for(int j=0;j<str_j.length();j++){
            if (str_s[i]==str_j[j])
            {
               count++;
               break;
            }
            
        }
    }cout<<count<<endl;
    }
    return 0;

}