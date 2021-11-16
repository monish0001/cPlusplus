#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
    double basicSalary,grosSgalary,HRA,DA;
    cin>>basicSalary;
    if(basicSalary<1500){
        HRA=(basicSalary*10)/100;
        DA=(basicSalary*90)/100;
    }else{
        HRA=500;
        DA=(basicSalary*98)/100;
    }
    grosSgalary=basicSalary+HRA+DA;
    cout<<fixed << setprecision(2)<<grosSgalary<<"\n";
    }
    return 0;
}