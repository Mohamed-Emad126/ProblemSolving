#include <bits/stdc++.h>
using namespace std;
int n,m,x,y,a[1050],b[1050],k[1050],ans[1010]={0},v1,v2,fn;
bool ok;
int main()
{
    cin>>n>>m>>x>>y;
    for(int i=0;i<n;i++){
        cin>>v1>>v2;
        k[v1]+=1;
        k[v2+1]-=1;
    }
    for(int i = 1 ; i < 1050 ; i++)
        k[i]+=k[i-1];
    for(int i = 0 ; i < m ; i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<m;i++){
        for(int s=x;s<=y;s++){
            for(int j=a[i]+s;j<=b[i]+s;j++){
                k[j]++;
            }
            /*for(int j=0;j<40;j++)
                cout<<k[j]<<" ";
            cout<<endl;*/
            for(int j=0;j<1010;j++){
                if(k[j]>1){
                    ans[s]++;
                    break;
                }
            }
            for(int j=a[i]+s;j<=b[i]+s;j++)
                --k[j];
        }
    }
    for(int i=0;i<1009;i++){
        if(ans[i]>0)
            fn++;
    }
    cout<<fn;
    return 0;
}
