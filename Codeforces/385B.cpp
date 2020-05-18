#include <bits/stdc++.h>
using namespace std;
int n,ans,v;
string x;
int main()
{
    cin>>x;
    n=x.length();
    for(int i=0;i<n-3;i++){
        if(x[i]=='b'&&x[i+1]=='e'&&x[i+2]=='a'&&x[i+3]=='r'){
            v=i+1;
        }
        ans+=v;
    }
    cout<<ans;
    return 0;
}
