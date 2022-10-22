#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;
    for(cin>>t;t--;){
        cin>>a>>b;
        cout<<(a%b!=0?b-a%b:0)<<endl;
    }
}