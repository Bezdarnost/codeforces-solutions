#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    for(cin>>t;t--;){
        cin>>n;
        cout<<(n%3==1?n/3+1:n/3)<<" "<<(n%3==2?n/3+1:n/3)<<endl;
    }
}