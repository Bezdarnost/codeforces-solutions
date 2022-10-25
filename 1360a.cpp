#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;
    for(cin>>t;t--;){
        cin>>a>>b;
        cout<<pow(max({a,b,min(a,b)*2}),2)<<endl;
    }
}