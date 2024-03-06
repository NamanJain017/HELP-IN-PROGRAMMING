#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int x,int y,int z,int n) {
    if(x>y && x>z && x>n)
    return x;
    else if(y>x && y>z && y>n)
    return y;
    else if(z>x && z>y && z>n)
    return z;
    else return n;
}

int main() {
    int a, b, c, d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    
    return 0;
}
