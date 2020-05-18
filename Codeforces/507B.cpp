#include <bits/stdc++.h>
using namespace std;
long long x,y,x1,y1,r,a,b;
int main()
{
    cin>>r>>x>>y>>x1>>y1;
    a=abs(x-x1);
    b=abs(y-y1);
    cout<<ceil(sqrt(pow(a,2)+pow(b,2))/(2*r));
    return 0;
}
