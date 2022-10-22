#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    for(cin>>t;t--;){
        cin>>n;
        if(n&1){
            cout<<"1 ";
            for(int i=2;i<=n;i++){
                cout<<(i^1)<<" ";
            }
        }
        else{
            for(int i=0;i<n;i++){
                cout<<(i^1)+1<<" ";
            }
        }
        cout<<endl;
    }
}