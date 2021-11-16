#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,last_digit,digit_sum=0;
    cin>>t;
    while (t--)
    {
    
    
        int n;
        cin>>n;
        while(n>0)
        {
            last_digit=n%10;
            digit_sum+=last_digit;
            n=n/10;
        }
        cout<<digit_sum<<endl;
        digit_sum=0;
    }
    return 0;
}