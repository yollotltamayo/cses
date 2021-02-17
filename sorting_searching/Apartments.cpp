#include<bits/stdc++.h>
using namespace std;
const int maxn = 2*1e5 + 10;
vector<int>alum , depas;
int main() { 
    int dep,stu,dif;
    cin>>stu>>dep>>dif;
    int x;
    for(int y = 0; y <stu;y++)
       cin>>x,alum.push_back(x); 
    for(int y = 0; y <dep;y++)
       cin>>x,depas.push_back(x); 
    sort(depas.begin() , depas.end());
    sort(alum.begin() , alum.end());
    //for(auto x:depas)cout<<x<<" ";
    //cout<<"\n";
    //for(auto x:alum)cout<<x<<" ";
    //cout<<"\n";
    int cta = 0,  i , j ; i = j = 0;
    while( i < alum.size() && j < depas.size()){
        if( depas[j] <= alum[i] + dif && depas[j] >= alum[i] -dif){
            cta +=1;
            //cout<<depas[j]<<" "<<alum[i];
            i++, j++;
        }else{
            if( alum[i] + dif< depas[j] )
                i++;
            else
                j++;
        }
    }
    cout<<cta;
    return 0;
} 

