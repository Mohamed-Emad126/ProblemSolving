#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    double mx=-1;
    int n,l;
    cin>>n>>l;
    double x[n]={0};
    for(int i=0;i<n;i++)
        cin>>x[i];
    sort(x,x+n);
    if(l==1)
        cout<<fixed<<setprecision(10)<<1;
    else{
            mx=max(l-x[n-1],x[0]-0);
            //cout<<mx<<endl;
        for(int i=0;i<n-1;i++){
            mx=max((x[i+1]-x[i])/2.0,mx);
        }
        cout<<fixed<<setprecision(10)<<mx;
    }
    return 0;
}
