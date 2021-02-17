#include<bits/stdc++.h>
using namespace std;
#define f first
#define s second
bool cmp(const pair<pair<int, int> , int>&a , pair<pair<int, int> , int>&b ) {
   return a.second < b.second; 
}
int main() {
    vector<pair<int,int>> par;
    int veces;
    cin>>veces;
    while(veces--){
        int a, b;
        cin>>a>>b;
        par.push_back({b,a});
    }
    sort(par.begin() , par.end());
    int i , j;
    i = j = 0;
    int cta = 0;
   for(int y = 0 ; y < par.size();y++ ){
       if( y == 0)
           i = par[0].s, j = par[0].f, cta +=1 ;
       else {
           int l = par[y].s, r = par[y].f;
        if( r <= i || j <= l )
            cta += 1 , i = min(i , l ), j = max(j , r);
        }
    //cout<<x.first.first<<" " <<x.first.second<<endl;
   }
   cout<<cta;
}
