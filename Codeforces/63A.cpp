#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0;
    pair<int,int>v[105];
    string nm[105],kd[105];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nm[i]>>kd[i];
        if(kd[i]=="rat"){
            v[i].first=1;
            v[i].second=i;
        }
        else if(kd[i]=="woman"||kd[i]=="child"){
            v[i].first=2;
            v[i].second=i;}
        else{
            if(kd[i]=="man"){
            v[i].first=3;
            v[i].second=i;
        }
        else{
            v[i].first=4;
            v[i].second=i;
        }
        }
    }
    sort(v,v+n);
    for(int i=0;i<n;i++){
        cout<<nm[v[i].second]<<endl;
    }
    return 0;
}
