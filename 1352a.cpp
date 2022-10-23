#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    for(cin>>t;t--;){
        cin>>n;
        int size=int(log10(n))+1;
        int num[size],nums=0;
        for(int i=0;i<size;i++){num[i]=n%10;if(n%10!=0){nums++;}n/=10;}
        cout<<nums<<endl;
        for(int i=0;i<size;i++){cout<<(num[i]!=0?to_string(int(num[i]*pow(10,i))):"")<<" ";}cout<<endl;
    }
}