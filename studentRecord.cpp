#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int absent=0,late=0;
        for(int i=0; i<s.length();i++){
                if(s[i]=='A'){
                    absent++;
                    if(absent==2)return false;
                }
                if(s[i]=='L'){
                    late++;
                    if(late==3)return false;

                }else{
                    late=0;
                }
        }
        return true;
    }
};

int main(){
   string str;
    cin>>str;
    Solution obj;
    cout<<obj.checkRecord(str);

}
