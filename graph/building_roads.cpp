#include<iostream>
#include<utility>
#include<vector>
using namespace std;
const int maxn = 2 * 1e5 + 10;
#define pii pair<int,int>
int padrote[maxn] ;
vector<pii>ans;
int padre(int a ){
    if(padrote[a] == a)
        return a;
    return padrote[a] = padre(padrote[a]);
}
bool join(int a , int b){
    a = padre(a);
    b = padre(b);
    if( a == b)
        return false;
    else
        padrote[b] = a;
    return true; 
}
int main() { 
    int cities, roads;
    cin>>cities>>roads;
    int prev = -1;
    for(int y = 0 ; y <= cities;y++)
        padrote[y] = y;
    for(int y = 0;  y < roads;y++){
        int a ,b;
        cin>>a>>b;
        join(a ,  b);
    }
    for(int y = 1 ; y <= cities;y++){
        if( prev != -1)
            if( join(prev , y) ) 
                ans.push_back({prev,y});
        prev = y;  
    }
    cout<<ans.size()<<"\n";
    for(auto x :ans)
        cout<<x.first<<" "<<x.second<<"\n";
}
    
    
