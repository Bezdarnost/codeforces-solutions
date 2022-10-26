#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i;
    for(cin>>t;t--;){
        int dif=0;
        cin>>n;int a[n];
        for(i=0;i<n;i++){cin>>a[i];}
        sort(a,a+n);
        for(i=0;i<n-1;i++){if(a[i+1]-a[i]>dif){dif=a[i+1]-a[i];}}
        cout<<(dif>1?"NO\n":"YES\n");
    }
}