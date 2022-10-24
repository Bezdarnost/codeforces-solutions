#include<bits/stdc++.h>
using namespace std;
main(){
    int t,n,a,x,y,i;
    for(cin>>t;t--;){
        cin>>n;x=y=0;
        for (i=0;i<n;i++){cin>>a;(i&1?x:y)+=(i^a)&1;}
        cout<<(x-y?-1:x)<<"\n";}
}