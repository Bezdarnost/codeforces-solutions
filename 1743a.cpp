#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a;
    for(cin>>t;t--;){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
        }
        cout<<(10-n)*(9-n)*3<<endl;
    }
}