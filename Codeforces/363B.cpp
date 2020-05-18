#include <iostream>
using namespace std;
int main()
{
    int n,ans,k,z=1;
    cin>>n>>k;
    int x[n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=1;i<n;i++)
        x[i]=x[i]+x[i-1];
    ans=x[k-1];
    for(int i=k;i<n;i++){
        if(ans>x[i]-x[i-k]){
            ans=x[i]-x[i-k];
            z=i-k+2;
            }
        }
    cout<<z;
    return 0;
}
