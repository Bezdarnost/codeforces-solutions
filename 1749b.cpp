#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,a;
    for(cin>>t;t--;){
        long long ans=0,mx=0;
        cin>>n;
        for(int i=0;i<n;i++){cin>>a;ans+=a;}
        for(n;n--;){cin>>a;ans+=a;mx=max(mx,a);}
        cout<<ans-mx<<endl;
    }
}   