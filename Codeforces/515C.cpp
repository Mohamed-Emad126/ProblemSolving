#include <bits/stdc++.h>
using namespace std;
long long n;
string ans="",nm,x[10]={"","","2","3","322","5","53","7","7222","7332"};
int main()
{
    cin>>n;
    cin>>nm;
    for(int i=0;i<nm.length();i++){
        ans+=x[nm[i]-'0'];
    }
    sort(ans.rbegin(),ans.rend());
    cout<<ans;
    return 0;
}
