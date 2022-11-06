#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string x;
    for(cin>>t;t--;){
        cin>>x;
        cout<<10*int(x[0]-49)+size(x)*(size(x)+1)/2<<endl;
    }
}