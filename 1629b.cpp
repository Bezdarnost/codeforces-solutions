#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t,l,r,k;
    for(cin>>t;t--;){
        cin>>l>>r>>k;
        cout<<((k>=(r+1)/2-l/2)||(r==l&&r!=1)?"YES\n":"NO\n");
    }
}