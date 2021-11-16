#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,temp;
    getline(cin,str);
    stringstream str1(str);
    while(getline(str1,temp, ' ')){
        transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
         cout<<temp<<"\n";
    }

    return 0;
}