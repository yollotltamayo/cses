#include<bits/stdc++.h>
using namespace std;
int main() {
    int m , n;
    cin>>m>>n;
    int x;
    multiset<int ,greater<int>>p;
    for(int y = 0; y <m ;y++){
        cin>>x, p.insert(x);
    }
    for(int y = 0; y <n ;y++){
        cin>>x; 
        auto it = p.lower_bound(x);
        if( it == p.end() )
            cout<<"-1"<<"\n";
        else{
            cout<<*it<<"\n";
            p.erase(it);
        }
    }
}
