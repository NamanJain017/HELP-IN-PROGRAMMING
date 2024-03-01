#include <bits/stdc++.h>
using namespace std;

#define ll long long
int check(ll n){
    if(n==1)return 0;
    for(int i=2;1LL*i*i<=n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
ll solve(ll n){
    if(check(n))return n;
    ll ret=0;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            if(check(i))ret=max(ret,i);
            if(check(n/i))ret=max(ret,n/i);
        }
    }
    return ret;
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        cout<<solve(n)<<endl;
    }
    return 0;
}
