#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    bool flage;
    int temp=str.size();
    for(int i=str.size()/2; i>=0;i--){
        if (str[i]!=str[temp-1-i])flage=0;
        else
        flage=1;
        
    }
    if(flage==1){
        cout<<"Pelindrome !!! \n\n";
    }else{
        cout<<" Not Pelindrome !!! \n\n";
    }
    return 0;
}
