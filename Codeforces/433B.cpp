#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int n,m,l,r,typ;
    cin>>n;
    long long int x[n]={0},z[n]={0};
    for(int i=0;i<n;i++){
        cin>>x[i];
        z[i]=x[i];
    }
    sort(z,z+n);
    for(int i=1;i<n;i++){
        x[i]+=x[i-1];
        z[i]+=z[i-1];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>typ>>l>>r;
        if(typ==1)
            cout<<x[r-1]-((l-2>=0)?x[l-2]:0)<<endl;
        else
            cout<<z[r-1]-((l-2>=0)?z[l-2]:0)<<endl;
    }
    return 0;
}
