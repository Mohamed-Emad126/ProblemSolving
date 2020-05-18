#include <bits/stdc++.h>
using namespace std;
int x,n,ans;
string s[105],v;
bool ok;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        cin>>v;
        for(int j=0;j<n;j++){
            if(v==s[j]){
                ok=true;
                s[j]="0";
                break;}
        }
        if(!ok)
            ans++;
        v.clear();
        ok=false;
    }
    cout<<ans;
    return 0;
}
