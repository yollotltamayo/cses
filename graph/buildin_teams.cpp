#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5;
vector<int>adj[maxn];
int color[maxn] = {0};
bitset<maxn>marc;
bool dfs(int a ) {
   for(auto y: adj[a])
       if(!marc[y] ){
        color[y] = 1-color[a];
            marc[y] = true;
        if( !dfs(y) )
            return false;
       }else
            if(  color[y] == color[a] )
                return false;
   return true;
}
int main() { 
    int tam , n;
    marc.reset();
    cin>>tam>>n; 
    for(int y = 0 ; y < n;y++){
        int a , b;
        cin>>a>>b , adj[a].push_back(b),adj[b].push_back(a);
    }
    for(int y = 1; y <= tam;y++)
        if(!marc[y]){
            color[y] = 1;
            if(!dfs(y) ){
                cout<<"IMPOSSIBLE\n";
                return 0;
           }                
        }
for(int y = 1 ; y <= tam;y++)
    cout<<color[y] + 1<<" ";
}

