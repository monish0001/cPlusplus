#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int cost_p,cost_g,participant,total_cost_g=0,total_cost_p=0,total=0;
    int arr[10][2];
    cin>>cost_g>>cost_p;
    cin>>participant;
    for (int i = 0; i < participant; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>arr[i][j];
        }
        
    }
     for (int i = 0; i < participant; i++)
    {
        if(arr[i][0]==1)
        total_cost_g= total_cost_g + cost_g;
    }
    for (int i = 0; i < participant; i++)
    {
        if(arr[i][1]==1)
        total_cost_p= total_cost_p+cost_p;    
    }
    total=total_cost_p + total_cost_g;
    cout<<total<<"\n";  
return 0;    
}