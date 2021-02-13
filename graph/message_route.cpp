#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 10;
vector<int> adj[maxn];
int arr[maxn] ;
bitset<maxn>p;
bool bfs(int a , int b ) { 
    p.reset();
    queue<int>q;
    memset(arr, - 1 , sizeof arr);
    arr[a]= -100;
    p[a] = true;
    q.push(a);
    while(!q.empty()){
       int actual = q.front(); q.pop(); 
       for(auto x: adj[actual])
           if(!p[x]){
               arr[x] = actual;
               p[x] = true;
               q.push(x);
               if( x == b)
                   return true;
           }
    }
    return false;
}
int main() {
    int  m , n ;
    cin>>n>>m; 
    int a , b;

    for( int y = 0 ; y < m;y++)
        cin>>a>>b,adj[a].push_back(b) ,adj[b].push_back(a) ;
    if(!bfs(1 , n )){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    vector<int>ans;
    //for(int y = 0 ; y <= n;y++)
        //cout<<arr[y]<<' ';
    for(int y = n; y != -100 ; y = arr[y])
        ans.push_back(y);
    cout<<ans.size()<<"\n";
    for(auto x = ans.rbegin() ; x != ans.rend() ; x++)
        cout<<*x<<' ';
}    
