#include <bits/stdc++.h>
using namespace std;
int n,x[1009]={0},temp,k=0,mk=-1;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        x[temp-1]++;
    }
    for(int i=0;i<1002;i++){
        mk=max(mk,x[i]);
        x[i]>0?k++:' ';
    }
    cout<<mk<<" "<<k;
    return 0;
}
