#include <iostream>
using namespace std;
int n,x[105],ans,mx=0;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i];
    /*if(n==1)
        return cout<<(x[0]==0?1:0) , 0;*/
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //cout<<i<<" "<<j<<" ";
            for(int k=0;k<n;k++){
                if(k<=j&&k>=i){
                    if(!x[k])
                        ans++;
                }
                else{
                    if(x[k])
                        ans++;
                }
            }
            mx=max(ans,mx);
            //cout<<mx<<endl;
            ans=0;
        }
    }
    cout<<mx;
    return 0;
}
