#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>=b&&a>=c)
        {
            if(b>c)cout<<b<<"\n";
            else cout<<c<<"\n";
        }else if(b>=a&&b>=c)
        {
            if(a>=c) cout<<a<<"\n";
            else cout<<c<<"\n";
        }else if(a>=b) cout<<a;
            else cout<<b<<"\n";
    }
return 0;
}
