#include<bits/stdc++.h>
using namespace std;
#define ll long long:
#define pii pair<int, int>
#define s second
#define f first
int m ,n;
char pto[1001][1001];
int dx[] = { 1, 0,-1, 0};
int dy[] = { 0 ,1, 0 ,-1};
int p,t;
map<pii,pii>padre;
char pol(int a ,int b, int x , int y){
    if( a == x){
       if( b < y)return 'L';
       else return 'R';
    }
    if(b == y){
        if( a < x) return 'U';
        else return 'D';
    }
    return ' ';
}
bool bfs(int a, int b){
    queue<pii>q;
    padre[{a,b}] = {-2000,-2000};
    q.push({a,b});
    pto[a][b] = '#';
    while(!q.empty()){
        pii actual = q.front();q.pop();
        int i = actual.f,j = actual.s;
        for(int y = 0; y < 4; y++){
            if( !(i + dx[y] >= m || j + dy[y] >= n || i + dx[y] < 0 || j  + dy[y] < 0))
                if (pto[i + dx[y]][j + dy[y]] != '#'){
                    padre[{i + dx[y],j + dy[y]}] = {i , j};
                    if(pto[i + dx[y]][j + dy[y]] == 'B'){
                        p = i + dx[y];
                        t = j + dy[y];
                        return true;
                    }
                    q.push({i + dx[y], j + dy[y]});
                    pto[i + dx[y]][j + dy[y]]  = '#';
                }
        }
    }
    return false;
}
int main(){
    cin>>m>>n;
    int a , b ;
    char c;
    for(int y = 0; y < m ; y++){
        for(int z = 0; z <n ;z++){
            cin>>pto[y][z];
            if(pto[y][z] == 'A')
                a = y,b = z;
        }
    }
    if(!bfs(a ,b)){
        cout<<"NO\n";
    }else{
        string h = "";
        pii pad = padre[{p,t}];
        h += pol(p,t,pad.f,pad.s);
        while(pad.f != -2000 && pad.s != -2000){
            pii v = pad;
            pad = padre[pad];
            h += pol(v.f,v.s,pad.f,pad.s);
        }
        
        cout<<"YES\n";
        reverse(h.begin(),h.end());
        if(h[0] == ' ')h.erase(0,1);
        cout<<h.length()<<"\n";
        cout<<h;

    }
    return 0;
}


    
