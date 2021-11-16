#include<bits/stdc++.h>
using namespace std;
int main(){

    string str1,str2,temp;
    cin>>str1>>str2;
    temp=str1;
    cout<<str1.size()<<" "<<str2.size()<<endl;
    cout<<str1+str2<<endl;
    str1[0]=str2[0];
    str2[0]=temp[0];
    cout<<str1<<" "<<str2<<endl;

    return 0;
}