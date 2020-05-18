#include <bits/stdc++.h>
using namespace std;
int n,x[1005];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
        if(!(x[i]&1))
            x[i]--;
    }
    for(int i=0;i<n;i++) cout<<x[i]<<" ";
    return 0;
}
