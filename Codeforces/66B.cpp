#include <iostream>
using namespace std;
int n,x[1009]={0},ans=1,mx=-1;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n-1;j++){
            if(x[j]>=x[j+1])
                ans++;
            else
                break;
            //cout<<x[j]<<" "<<x[j+1]<<" "<<ans<<endl;
        }
       // cout<<endl;
        //cout<<ans<<" ";
        for(int j=i;j>0;j--){
            if(x[j]>=x[j-1])
                ans++;
            else
                break;
            //cout<<x[j]<<" "<<x[j-1]<<" "<<ans<<endl;
        }
        //cout<<ans<<endl;
        mx=max(mx,ans);
        ans=1;
    }
    cout<<mx;
    return 0;
}
