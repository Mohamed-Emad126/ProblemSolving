#include <iostream>
#include <algorithm>
using namespace std;
int x[(int)10e6]={0},z[(int)10e6]={0},ch[(int)10e6]={0};
int main()
{
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    int n,m,a=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=0;i<m;i++)
        cin>>z[i];
    sort(x,x+n);
    for(int i=0;i<m;i++)
        z[i]=upper_bound(x,x+n,z[i])-x;
    for(int i=0;i<m;i++)
        cout<<z[i]<<" ";
    return 0;
}
