#include <iostream>
using namespace std;
string s,ans;
int n,o,z;
bool ok=false;
int main()
{
    cin>>s;
    n=s.length();
    ans.clear();
    for(int i=0;i<n;i++){
        if(s[i]=='2'&&!ok)
            ok=true;
        if(ok&&(s[i]=='2'||s[i]=='0'))
            ans+=s[i];
        if(s[i]=='1')
            o++;
        if(!ok&&s[i]=='0')
            z++;
    }
    for(int i=0;i<z;i++)
        cout<<0;
    for(int i=0;i<o;i++)
        cout<<1;
    cout<<ans;
    return 0;
}
