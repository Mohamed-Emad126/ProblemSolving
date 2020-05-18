#include <iostream>
using namespace std;
int n,m,k,x[1009][1009],v1[1009],v2[1009],b,c;
char a;
int main()
{
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>x[i][j];
        }
    }
    for(int i=0;i<=n;i++){
        v1[i]=i;
    }
    for(int i=0;i<=m;i++){
        v2[i]=i;
    }
    for(int i=0;i<k;i++){
        cin>>a>>b>>c;
        if(a=='g')
            cout<<x[v1[b]-1][v2[c]-1]<<endl;
        else if(a=='r'){
            swap(v1[b],v1[c]);
        }
        else{
            swap(v2[b],v2[c]);
        }
    }
    return 0;
}
