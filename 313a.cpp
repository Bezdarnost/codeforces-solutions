#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<max({n,n/100*10+n%10,n/10});
}