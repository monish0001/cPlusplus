#include<bits/stdc++.h>
using namespace std;
const int N= 10000;
int arr[N][N];


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,n1;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>n1;
        for (int j=0; j<n1; j++) {
          cin>>arr[i][j];
        }
        
    }
    while(q--){
        int i,j;
        cin>>i>>j;
        cout<<arr[i][j]<<"\n";
    }
    return 0;
}