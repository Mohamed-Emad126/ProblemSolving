#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long n,t,sm=0,mx=0;
    cin>>n>>t;
    long long x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    long long st,fn;
    st=fn=0;
    while(st<n){
        while(fn<n){
            if(sm+x[fn]>t) break;
            sm+=x[fn];
            fn++;
            mx=max(mx,fn-st);
        }
        sm-=x[st++];
    }
    cout<<mx;
    return 0;
}
