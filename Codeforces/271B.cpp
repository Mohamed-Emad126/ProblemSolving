#include <bits/stdc++.h>
using namespace std;
int n,m,x[505][505],sm;
vector<int>prim,col,row;
bool primes(int a){
    for(int i=2;i*i<=a;i++){
        if(a%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>x[i][j];
    }
    for(int i=2;i<200000;i++){
        if(primes(i))
            prim.push_back(i);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            x[i][j]=*lower_bound(prim.begin(),prim.end(),x[i][j])-x[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            sm+=x[i][j];
        row.push_back(sm);
        sm=0;
    }
    sm=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            sm+=x[j][i];
        col.push_back(sm);
        sm=0;
    }
    cout<<min(*min_element(col.begin(),col.end()),*min_element(row.begin(),row.end()));
    return 0;
}
