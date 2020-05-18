#include <iostream>
using namespace std;
long long x,y,a[6],n,ans,cons= 1000000007;
int main()
{
    cin>>x>>y;
    a[0]=x;
    a[1]=y;
    a[2]=y-x;
    a[3]=a[2]-a[1];
    a[4]=a[3]-a[2];
    a[5]=a[4]-a[3];
    cin>>n;
    cout<<(a[(n-1)%6]%cons+cons)%cons;
    return 0;
}
