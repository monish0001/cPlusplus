#include<bits/stdc++.h>
using namespace std;

int main(){
    int count;cin>>count;
    int arr[count];
    for(int i = 0; i < count; i++)
    {
      cin>>arr[i];
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = i+1; j < count; j++)
        {
        
        if(arr[j]<arr[i]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }
    for(int i = 0; i < count; i++)
    {
      cout<<arr[i]<<"\n";
    }
    
    
}
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int count;cin>>count;
    int arr[count];
    for(int i = 0; i < count; i++)
    {
      cin>>arr[i];
    }
      sort(arr, arr + count);
    for(int i = 0; i < count; i++)
    {
      cout<<arr[i]<<"\n";
    }
    
    
}

*/