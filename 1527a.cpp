    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        int t,n;
        for(cin>>t;t--;){
            cin>>n;
            cout<<((1<<int(log2(n)))-1)<<endl;
        }
    }
    