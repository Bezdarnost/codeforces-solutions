#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;string y;
    for(cin>>n;n--;){
        int sum=0,zeros=0,evens=0;
        cin>>y;
        for(int i=0;i<y.size();i++){
            if(int(y[i])-48==0){zeros++;}
            if((int(y[i])-48)%2==0){evens++;}
            sum+=int(y[i])-48;}
        cout<<(zeros>=1&&evens>1&&sum%3==0?"red\n":"cyan\n");
    }
}
