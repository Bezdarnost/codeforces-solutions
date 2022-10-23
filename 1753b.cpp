#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,num;
    cin>>n>>x;
    int a[x];
    for(int i=0;i<x;i++){a[i]=0;}
    for(int i=0;i<n;i++){cin>>num;a[num-1]+=1;}
    for(int i=0;i<x;i++){if(a[i]%(i+2)==0){a[i+1]+=a[i]/(i+2);a[i]=0;}}
    for(int i=0;i<x;i++){if(a[i]!=0&&(i+1)<x){cout<<"No";return 0;}}
    cout<<"Yes";
}