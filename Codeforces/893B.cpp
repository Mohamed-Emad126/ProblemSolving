#include <bits/stdc++.h>
using namespace std;
long long n,mx=-1;
vector<long long>bd;
int main()
{
    cin>>n;
    for(int i=1;i<=70;i++){
        bd.push_back((pow(2,i)-1)*(pow(2,i-1)));
    }
    for(int i=0;i<bd.size();i++){
        if(n%bd[i]==0){
            mx=max(bd[i],mx);
        }
    }
    cout<<mx;
    return 0;
}
