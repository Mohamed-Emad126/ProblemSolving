#include <bits/stdc++.h>
using namespace std;
int n,x[2000],ans[2000];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        fill(ans,ans+1008,0);
        int d=x[i];
        ans[i]++;
        while(ans[d-1]<=1){
            ans[d-1]++;
            if(ans[d-1]==2){
                break;
            }
            d=x[d-1];
        }
        cout<<max_element(ans,ans+1008)-ans+1<<" ";
    }
    return 0;
}
