#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k1,k2,w,b;
    for(cin>>t;t--;){
        cin>>n>>k1>>k2;
        cin>>w>>b;
        cout<<(k1+k2>=2*w&&2*n-k1-k2>=2*b?"YES\n":"NO\n");
    }
}