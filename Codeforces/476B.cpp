#include <bits/stdc++.h>
using namespace std;
string s,t;
int a,b,c,po,ng;
double ans,d;
int main()
{
    cin>>s>>t;
    for(int i=0;i<s.length();i++){
        s[i]=='+'?a++:a--;
    }
    for(int i=0;i<t.length();i++){
        t[i]=='+'?b++:(t[i]=='-'?c++:d++);
    }
    if(a==b-c&&d==0)
        return cout<<fixed<<setprecision(16)<<double(1) , 0;
    for(int msk=0;msk<(1<<int(d));msk++){
        for(int j=0;j<d;j++){
            if(msk&(1<<j))
                po++;
            else
                ng++;
        }
        if(po+b-ng-c==a)
            ans++;
        po=0; ng=0;
    }
    //cout<<(1<<t.length())<<" "<<ans<<" "<<d<<endl;
    cout<<fixed<<setprecision(16)<<double(ans/pow(2,d));
    return 0;
}
