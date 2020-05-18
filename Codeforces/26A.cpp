#include <bits/stdc++.h>
using namespace std;
int n,m,ans;
set<int>st;
bool isPrime(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                if(isPrime(j))
                    st.insert(j);
                if(isPrime(i/j))
                    st.insert(i/j);
            }
        }
        //cout<<i<<" :";
        if(st.size()==2)
            ans++;
        /*for(auto z:st)
            cout<<z<<" ";
        cout<<endl;*/
        st.clear();
    }
    cout<<ans;
    return 0;
}
