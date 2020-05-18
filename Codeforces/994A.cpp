#include <iostream>
using namespace std;
int n,m,x[100],y[100],a;
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>x[i];
    for(int i=0;i<m;i++) cin>>y[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(x[i]==y[j]){
                y[j]=-1;
                cout<<x[i]<<" ";
                break;}
        }
    }
    return 0;
}
