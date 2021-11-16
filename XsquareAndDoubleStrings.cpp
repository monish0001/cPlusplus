#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    string str,str1,str2,str3;
    cin>>str;
    for(int i=0;i<str.length();i++){
        str3.push_back(str[i]);

    }
    for(int i=0;i<str.length()/2;i++){
        str1.push_back(str[i]);

    }
    for(int i=str.length()/2;i<str.length();i++){
        str2.push_back(str[i]);

    }
    if (str1==str2){
        cout<<"Yes\n";
    }else if(str==str3 && str.length()>2){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    }
}
