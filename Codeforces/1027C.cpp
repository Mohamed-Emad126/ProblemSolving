#include <bits/stdc++.h>
using namespace std;
int n,t,x[int(2e6)],a[4];double ans;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cin>>t;
    for(int f=0;f<t;f++){
        map<int,int>mp;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        vector<int>x;
        for(int i=0;i<n;i++){
            if(!(mp[a[i]]&1)){
                x.push_back(a[i]);
            }
            else
                mp[a[i]]--;
        }
        sort(x.begin(),x.end());
        double p=(2*(x[0]+x[3]));
        double s=x[0]*x[3];
        ans=(p*p)/s;
        a[0]=x[0];a[1]=x[1];a[2]=x[2];a[3]=x[3];
        for(int i=0;i<x.size()-3;i++){
            double p=(2*(x[i]+x[i+3]));
            double s=x[i]*x[i+3];
            double ck=(p*p)/s;
            if(ans>ck){
                ans=ck;
                a[0]=x[i];a[1]=x[i+1];a[2]=x[i+2];a[3]=x[i+3];
            }
        }
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
        ans=0;
        fill(a,a+4,0);
    }
    return 0;
}
