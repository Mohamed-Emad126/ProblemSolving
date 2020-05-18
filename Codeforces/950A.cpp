#include <iostream>
using namespace std;
int l,n,r,a,mn,mx;
int main()
{
    cin>>l>>r>>a;
    mn=min(l,r);
    mx=max(l,r);
    if(mn+a<=mx){
        return cout<<2*(mn+a) , 0;
    }
    else if(mn+a>mx){
        a-=(mx-mn);
        mn=mx;
        return cout<<2*(mn+int(a/2)) , 0;
    }
    return 0;
}
