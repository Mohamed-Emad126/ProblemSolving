#include <iostream>
using namespace std;
int x,n,a,b,ans,on;
int main()
{
    cin>>n>>a>>b;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==1&&a>0){
            a--;
        }
        else if(x==1&&a==0&&b>0){
            b--;
            on++;
        }
        else if(x==1&&on>0){
            on--;
        }
        else if(x==1){
            ans++;
        }
        if(x==2&&b>0){
            b--;
        }
        else if(x==2&&b==0){
            ans+=2;
        }
    }
    cout<<ans;
    return 0;
}
