#include<bits/stdc++.h>
using namespace std;
int main() {
    int ni , w, L,R;
    cin>>ni>>w;
    L = 0, R = ni - 1;
    vector<int>nin(ni);
    for(auto &x:nin)cin>>x;
    sort(nin.begin() , nin.end());
    int cta = 0;
    while( L <= R){
        if( nin[L] + nin[R] <= w){
             L++,R--;
             cta +=1;
        }else{
           cta+=1;
           R--;
        }
    }
    cout<<cta;
    return 0;
}

