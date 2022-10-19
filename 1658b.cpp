#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    for(cin>>t;t--;){
        cin>>n;
        long long res=1;
        if(n&1){
            cout<<"0\n";
            continue;
        }
        else{
            for(int i=2;i<=n/2;i++){
                res*=i*i;
                res%=998244353;
            }
            cout<<res<<endl;
        }
    }
}