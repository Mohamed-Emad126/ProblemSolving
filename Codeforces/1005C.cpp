#include <bits/stdc++.h>
using namespace std;
long long x[150000],n,a,ans[40],z[150000],k,fnd;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=1;i<41;i++)
        ans[i-1]=pow(2,i);
    sort(x,x+n);
    /*for(int i=0;i<n;i++)
        cout<<x[i]<<" ";
        cout<<endl;
    for(int i=0;i<n;i++){
        cout<<lower_bound(x,x+n,x[i])-x<<" ";
    }*/
    for(int i=0;i<n;i++){
        for(int j=0;j<40;j++){
            if(binary_search(x,x+n,ans[j]-x[i])&&(lower_bound(x,x+n,ans[j]-x[i])-x)!=i){
                z[lower_bound(x,x+n,ans[j]-x[i])-x]=1;
                z[i]=1;
            }
        }
    }
    for(int i=0;i<n;i++)
        !z[i]?a++:' ';
    cout<<a;
    return 0;
}
