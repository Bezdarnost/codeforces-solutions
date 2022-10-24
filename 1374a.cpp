#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y,n;
    for(cin>>t;t--;){
        cin>>x>>y>>n;
        cout<<n-(n-y)%x<<endl;
    }
}