#include<bits/stdc++.h>
using namespace std;

int main(){
    int X;
    float Y;
    cin>>X>>Y;

    if(X>Y){
    cout<<fixed<<setprecision(2)<<Y;
    }
    else if(X%5==0&&Y>X){
        Y=Y-X-0.50;
        cout<<fixed<<setprecision(2)<<Y;
    }else{
       cout<<fixed<<setprecision(2)<<Y;  
    }
    
    return 0;
}