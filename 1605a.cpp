#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, a, b, c;
    for(cin>>t;t--;){
        cin>>a>>b>>c;
        cout<<((a+c-2*b)%3==0?0:1)<<endl;
    }
}