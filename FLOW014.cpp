#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
    float c_Content;
    int harDness,t_Strength;
    cin>>harDness>>c_Content>>t_Strength;
    if(harDness>50 && c_Content<0.7 && t_Strength>5600) cout<<"10\n";
    else if (harDness>50 && c_Content<0.7 && t_Strength<=5600) cout<<"9\n";
    else if (harDness<=50 && c_Content<0.7 && t_Strength>5600) cout<<"8\n";
    else if (harDness>50 && c_Content>=0.7 && t_Strength>5600) cout<<"7\n";
    else if (harDness>50 || c_Content<0.7 || t_Strength>5600) cout<<"6\n";
    else if (harDness<=50 && c_Content>=0.7 && t_Strength<=5600) cout<<"5\n";
    }
}