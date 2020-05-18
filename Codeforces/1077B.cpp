#include <iostream>
using namespace std;
int x[109],n,ans;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=1;i<n-1;i++){
        if(x[i]==0&&x[i-1]==1&&x[i+1]==1){
            x[i+1]=0;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
