#include <bits/stdc++.h>
using namespace std;
long long n,m,mx,c,ck=0,oo=(long long)1e10;
vector<long long>x,y,a;
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>c;
        x.push_back(c);}
    for(int i=0;i<m;i++){
        cin>>c;
        y.push_back(c);}
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a.push_back(x[i]*y[j]);
        }
    }
    mx=*max_element(a.begin(),a.end());
    for(int i=0;i<x.size();i++){
        for(int j=0;j<m;j++){
            if(x[i]*y[j]==mx){
                //cout<<x[i]<<endl;
                x.erase(x.begin()+i);
                ck++;
                break;}
        }
        if(ck>0)
            break;
    }
    /*for(auto q:x)
        cout<<q<<" ";*/
    a.clear();
    for(int i=0;i<x.size();i++){
        for(int j=0;j<m;j++){
            a.push_back(x[i]*y[j]);
        }
    }
    cout<<*max_element(a.begin(),a.end());
    return 0;
}
