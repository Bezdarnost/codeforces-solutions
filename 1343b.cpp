#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    for(cin>>t;t--;){
        int a=2,b=1;
        cin>>n;n/=2;
        if(n&1){cout<<"No\n";continue;}
        cout<<"YES\n";
        for(int i=0;i<n;i++){cout<<a<<" ";a+=2;}
        for(int i=1;i<n;i++){cout<<b<<" ";b+=2;}
        cout<<b+n<<endl;
    }
}