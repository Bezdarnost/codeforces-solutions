#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m,x,y,samex, samey;
    for(cin>>t;t--;){
        cin>>n>>m;
        int x[m];
        int y[m];
        for(int i=0;i<m;i++){
            cin>>x[i]>>y[i];
        }
        int lenx = sizeof(x)/sizeof(x[0]);
        int leny = sizeof(y)/sizeof(y[0]);
        sort(x,x+lenx);
        sort(y,y+leny);
        samex=0;
        samey=0;
        for(int i=0;i<m;i++){
            if(x[i]==x[i+1]){
                samex++;
            }
            if(y[i]==y[i+1]){
                samey++;
            }
        }
        if(m==n&&(samex==0||samey==0)){
            cout<<"NO\n";
        }
        else if(samex>1||samey>1){
            cout<<"NO\n";
        }
        else{cout<<"YES\n";}
    }
}