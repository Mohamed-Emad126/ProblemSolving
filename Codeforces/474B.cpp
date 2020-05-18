/**i submit this problem again for pst contest on a2oj**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sm=0,m;
    cin>>n;
    int x[n]={0};
    for(int i=0;i<n;i++){
        cin>>x[i];
        sm+=x[i];
    }
    int z[sm]={0};
    for(int i=1;i<=sm;i++){
        z[i]==i;
    }
    int pre[n]={0};
    pre[0]=x[0];
    for(int i=1;i<n;i++){
        pre[i]=x[i]+pre[i-1];
    }
    /*for(int i=0;i<n;i++){
        cout<<pre[i]<<" ";
    }*/
    cin>>m;
    int ask[m];
    for(int i=0;i<m;i++)
        cin>>ask[i];
    for(int i=0;i<m;i++){
        cout<<lower_bound(pre,pre+n,ask[i])-pre+1<<endl;
    }
    return 0;
}
