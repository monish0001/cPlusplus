#include<iostream>
using namespace std;
int main(){

    int a,b,c,greatest=0;
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
        greatest=a;
    }else if(b>c){
        greatest=b;
    
    }else{
        greatest=c;
    }
    
    
    return 0;
}