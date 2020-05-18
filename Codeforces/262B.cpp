#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int n,k,sm=0;
    cin>>n>>k;
    int x[n]={0};
    for(int i=0;i<n;i++)
        cin>>x[i];
    sort(x,x+n);
    for(int i=0;i<n;i++){
        if(x[i]<0&&k>0){
            x[i]=(x[i]*-1);
            k--;
        }
    }
    sort(x,x+n);
    if(k&1)
        x[0]=(x[0]*-1);
    for(int i=0;i<n;i++)
        sm+=x[i];
    cout<<sm;
    return 0;
}
