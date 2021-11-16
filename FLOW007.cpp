#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,rn=0;
        cin>>n;
        while(n>0)
        {
            rn=rn*10+n%10;
            n=n/10;
        }
    cout<<rn<<endl;
    }
    return 0;
}