#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    for(cin>>t;t--;){
        cin>>n;
        if(n<31){
            cout<<"NO"<<endl;
        }
        else if(n==36||n==40||n==44){
            cout<<"YES"<<endl<<"6 10 15 "<<n-31 <<endl;
        }
        else{cout<<"YES"<<endl<<"6 10 14 "<<n-30<<endl;}
    }
}