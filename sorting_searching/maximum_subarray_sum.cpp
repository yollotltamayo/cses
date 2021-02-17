#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int veces;
    ll ma = INT_MIN , k = INT_MIN , cu =   INT_MIN ;
    cin>>veces;
    while(veces--){
        cin>>k;
       cu = max(k , cu + k);
       ma = max(ma, cu);
    }
    cout<<ma;
}
