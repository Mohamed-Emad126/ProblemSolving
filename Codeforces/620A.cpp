#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a,b,ft,st;
    cin>>x>>y;
    cin>>a>>b;
    ft=min(abs(x-a),abs(y-b));
    st=max(abs(x-a),abs(y-b));
    if(ft==st)
        cout<<st;
    else
        cout<<ft+(st-ft);
    return 0;
}
