#include <iostream>
#include <climits>
using namespace std;
int n,fp=INT_MAX,sp=INT_MIN,x[1000]={0},pos,ans=0;
int main()
{
    cin>>n>>pos;
    for(int i=100;i<n+100;i++)
        cin>>x[i];
    fp=pos+100-1;
    sp=pos+100-1;
    for(int i=100;i<n+100;i++){
        if((x[fp]==1&&x[sp]==1)){
            fp==sp?(ans++):(ans+=2);
            }
        else if((fp<100&&x[sp]==1&&sp<n+100)||(x[fp]==1&&sp>n+100-1&&fp>=100)){
            ans++;
        }
        //cout<<fp<<" "<<sp<<" "<<" "<<x[fp]<<" "<<x[sp]<<" "<<ans<<endl;
        fp--;
        sp++;
        if(fp<100&&sp>n+100-1)
            break;
    }
    cout<<ans;
    return 0;
}
