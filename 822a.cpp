#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,m,fac=1;
    cin>>a>>b;
    m=min(a,b);
    while(m>0){
        fac*=m;
        m-=1;
    }
    cout<<fac;
}