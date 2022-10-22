#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    for(cin>>t;t--;){
        int n;
        cin>>n;
        cout<<100/gcd(n,100)<<endl;
    }
}
