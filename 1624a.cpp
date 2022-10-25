#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a;
    for(cin>>t;t--;){
        int mx=1,mn=1000000000;
        for(cin>>n;n--;){cin>>a;mn=min(mn,a);mx=max(mx,a);}
        cout<<mx-mn<<endl;
    }
}