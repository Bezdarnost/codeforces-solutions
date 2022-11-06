#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,g;
    cin>>a>>b;
    c=7-max(a,b);g=gcd(c,6);
    printf("%d/%d",c/g,6/g);
}