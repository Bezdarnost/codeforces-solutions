#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, l;
    cin>>n>>l;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);int m=max(a[0],l-a[n-1])*2;
    for(int i=1;i<n;i++){
        m=max(m,a[i]-a[i-1]);
        }
    printf("%.10f",m/2.0);
}