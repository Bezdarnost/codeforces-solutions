#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, y;
    for (cin>>t;t--;){
        cin>>x>>y;
        if(y/x>=2){
            cout<<x<<" "<<x*2<<endl;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
        }
    }
}