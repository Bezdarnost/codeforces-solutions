#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a,odd,even;
    for(cin>>t;t--;){
        odd=even=0;cin>>n;
        while(n--){
            cin>>a;
            (a&1?odd:even)++;
        }
        cout<<(odd%2||(even%2&&odd<2)?"NO\n":"YES\n");
    }
}