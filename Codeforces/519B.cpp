#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n],y[n-1],z[n-2];
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=0;i<n-1;i++)
        cin>>y[i];
    for(int i=0;i<n-2;i++)
        cin>>z[i];
    sort(x,x+n);
    sort(y,y+n-1);
    sort(z,z+n-2);
    for(int i=0;i<n;i++){
        if(x[i]!=y[i]||i==n-1){
            cout<<x[i]<<endl;
            break;
        }
    }
    for(int i=0;i<n-1;i++){
        if(y[i]!=z[i]||i==n-2){
            cout<<y[i]<<endl;
            break;
        }
    }
    return 0;
}
