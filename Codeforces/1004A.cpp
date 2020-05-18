#include <bits/stdc++.h>
using namespace std;
int n,x[1005],a,b,d;
set<int>st;
int main()
{
    cin>>n>>d;
    for(int i=0;i<n;i++)
        cin>>x[i];
    st.insert(x[0]-d);
    if(abs(x[1]-(x[0]+d))>=d&&n>1)
        st.insert(x[0]+d);
    for(int i=1;i<n;i++){
        a=x[i]-d;
        b=x[i]+d;
        //cout<<a<<" "<<b<<endl;
        if(abs(a-x[i-1])>=d)
            st.insert(a);
        if(abs(x[i+1]-b)>=d&&i!=n-1)
            st.insert(b);
    }
    /*for(auto x:st)
        cout<<x<<" ";*/
    cout<<st.size()+1;
    return 0;
}
