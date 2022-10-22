#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    while((5*n*(n+1)/2)>(240-k)){n--;}
    cout<<n;
}