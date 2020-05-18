#include <bits/stdc++.h>
using namespace std;
int n,m,mx,mn,a;
priority_queue<int>pdq,ndq;
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a;
        pdq.push(a);
        ndq.push(-a);
    }
    while(n--){
        mx+=pdq.top();
        int z=pdq.top();
        z--;
        pdq.pop();
        if(z) pdq.push(z);
        ////////////////////////////
        mn+=abs(ndq.top());
        int v=ndq.top();
        v++;
        ndq.pop();
        if(v<0) ndq.push(v);
    }
    cout<<mx<<" "<<mn<<endl;
    return 0;
}
