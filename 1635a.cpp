#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m,tmp;
    for(cin>>t;t--;){
        m=0;
        cin>>n;
        for (int i = 0; i < n; i++) {
            cin>>tmp;m|=tmp;
        }        
        cout<<m<<endl;
    }
}