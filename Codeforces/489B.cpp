#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,k=0;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    cin>>m;
    int z[m];
    for(int i=0;i<m;i++){
        cin>>z[i];
    }
    sort(x,x+n);
    sort(z,z+m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(abs(x[i]-z[j])<=1){
               k++;
               z[j]=150;
               break;
            }
        }
    }
    cout<<k;
    return 0;
}
