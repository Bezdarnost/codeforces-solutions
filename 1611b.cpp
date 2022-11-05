#include <bits/stdc++.h>
using namespace std;
int main()
{
    long t,a,b;
    for(cin>>t;t--;){
        cin>>a>>b;
        cout<<min((a+b)/4,min(a,b))<<endl;
    }
}