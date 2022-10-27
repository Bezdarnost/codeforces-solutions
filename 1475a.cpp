#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    for(cin>>t;t--;){
        cin>>n;
        cout<<(n&n-1?"yes\n":"no\n");
    }
}