#include <bits/stdc++.h>
using namespace std;
int n,x;
set<int>st;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        st.insert(x);
    }
    if(st.size()>3)
        cout<<"NO";
    else{
        int a[3],i=0;
        if(st.size()==3){
            for(auto it:st){
                a[i++]=(it);
            }
            if(a[1]-a[0]==a[2]-a[1])
                cout<<"YES";
            else
                cout<<"NO";
        }
        else if(st.size()<3)
            cout<<"YES";
    }
    return 0;
}
