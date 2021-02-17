#include<bits/stdc++.h>
using namespace std;
int main() {
    int veces;
    vector<pair<int , int>>par;
    cin>>veces;
    while(veces--){
        int a , b;
        cin>>a>>b;
        par.push_back({a , 1});
        par.push_back({b , 0});
    }
    int ma , cta = 0;
    ma = 0 ;
    sort(par.begin(), par.end());
    //for(auto x : par)
        //cout<<x.first << " "<< x.second<<endl;
    for(int y = 0 ; y < par.size(); y++){
       if( par[y].second == 1 )
           cta+=1;
       else
           cta-=1;
        ma = max(cta , ma);
    }
    cout<<ma;
}
