#include <bits/stdc++.h>
using namespace std;
long long n,x;
int ans[4]={6,8,4,2};
int main()
{
    cin>>n;
    if(n==0){
        return cout<<1 , 0 ;
    }
    x=n%4;
    cout<<ans[x];
    return 0;
}
