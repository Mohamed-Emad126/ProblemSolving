#include <iostream>
using namespace std;
int n,z[(int)2e5];
pair<int,int>kit[(int)2e5],ans[(int)2e5];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>kit[i].first>>kit[i].second;
        z[kit[i].first]++;
        ans[i].first=n-1;
        ans[i].second=n-1;
    }
    for(int i=0;i<n;i++){
        if(z[kit[i].second]>0){
            ans[i].first+=z[kit[i].second];
            ans[i].second-=z[kit[i].second];
        }
    }
    for(int i=0;i<n;i++)
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    return 0;
}
