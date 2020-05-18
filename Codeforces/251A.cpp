#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long n,m,k=0,d;
    cin>>n>>d;
    int x[n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=0;i<n;i++){
        m=upper_bound(x,x+n,x[i]+d)-x;
        if(m-i-1>=2){
            k+=((m-i-1)*(m-i-2))/2;
        }
    }
    cout<<k;
    return 0;
}
