#include <bits/stdc++.h>
using namespace std;
int x[5000],n;
vector<int>v;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    x[n]=-1;
    for(int i=1;i<=n;i++){
        if(x[i]<=x[i-1]){
            v.push_back(x[i-1]);
        }
    }
    cout<<v.size()<<endl;
    for(auto z:v)
        cout<<z<<" ";
    return 0;
}
