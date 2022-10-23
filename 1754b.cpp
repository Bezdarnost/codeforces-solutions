#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    for(cin>>t;t--;){
        int plus,minus,start;
        cin>>n;
        if(n%2==0){plus=n/2;minus=plus+1;start=plus;
            cout<<start<<" ";
            for(int i=0;i<n-1;i++){
                if(i%2==0){
                    cout<<start+plus<<" ";start+=plus;
                }
                else{cout<<start-minus<<" ";start-=minus;}
            }
        }
        else{plus=n/2;minus=plus+1;start=n;
            cout<<start<<" ";
            for(int i=0;i<n-1;i++){
                if(i%2==0){
                    cout<<start-minus<<" ";start-=minus;
                }
                else{cout<<start+plus<<" ";start+=plus;}
            }
        }
        cout<<endl;
    }
}