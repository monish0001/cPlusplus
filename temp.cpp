#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1;
    for(int i=str1.size()-1;i>=0;i--){
            str2.push_back(str1[i]);
    }
    if(str1==str2){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}