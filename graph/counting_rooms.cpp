#include<iostream>
#include<vector>
#include<utility>
#include<cstring>
using namespace std;
#define pii pair<int, int>
int m , n;
vector<pii>p;
char ptos[1005][1005];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1,0,1};
void check(int a, int b ){
    if ( a >= m || b >= n || a < 0 || b < 0 )return ;
    if( ptos[a][b] != '.')return ;
    ptos[a][b] = '#';
    for(int y = 0; y < 4;y++)check(a + dx[y], b + dy[y]);
    return;
}

int main(){
    cin>>m>>n;
    memset(ptos, 0 , sizeof ptos);
    for(int y = 0; y < m ; y++){
        for(int z = 0;  z < n ;z++){
            cin>>ptos[y][z];
            if( ptos[y][z] == '.')p.push_back({y , z});
        }
    }
    int cta = 0;
    for(int y = 0; y < p.size();y++){
        if(ptos[p[y].first][p[y].second] == '.'){
            check(p[y].first,p[y].second),cta++;
        }
    }
    cout<<cta;
}



