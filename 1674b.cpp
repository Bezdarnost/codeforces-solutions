#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string s;
    for(cin>>t;t--;){
        cin>>s;
        cout<<(int(s[0])-97)*25+(int(s[1])-97)+(s[0]>s[1])<<endl;
    }
}