#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,x;
    for(cin>>t;t--;){
        cin>>a>>b;
        cout<<((a^min(a,b)) + (b^min(a,b)))<<endl;
    }
}