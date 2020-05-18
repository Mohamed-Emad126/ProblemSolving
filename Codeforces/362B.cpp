#include <bits/stdc++.h>
using namespace std;
long long n,m,x[3050];
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++) cin>>x[i];
    sort(x,x+m);
    if(x[0]==1||x[m-1]==n)
        return cout<<"NO" , 0;
    for(int i=0;i<m-2;i++){
        if(x[i]+1==x[i+1]&&x[i+1]+1==x[i+2])
            return cout<<"NO" ,0;
    }
    cout<<"YES";
    return 0;
}
