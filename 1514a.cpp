#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a;
    for(cin>>t;t--;){
        bool flag=false;
        for(cin>>n;n--;){
            cin>>a;
            if(sqrt(a)!=int(sqrt(a))){
                flag=true;
            }
        }
        cout<<(flag?"YES\n":"NO\n");
    }
}