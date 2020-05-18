#include <bits/stdc++.h>
using namespace std;
int n,m,x,a;
set<int>st;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        st.insert(x);
    }
    int ans=st.size();
    for(auto z:st){
        if(z==0)
            ans--;
    }
    cout<<ans;
    return 0;
}
