#include <bits/stdc++.h>
using namespace std;
string s;
pair<int,char>x[3];
int main()
{
    x[0].second='A';
    x[1].second='B';
    x[2].second='C';
    for(int i=0;i<3;i++){
        cin>>s;
        if(s[1]=='>'){
            s[0]=='A'?x[0].first+=3:(s[0]=='B'?x[1].first+=3:x[2].first+=3);
            s[2]=='A'?x[0].first+=1:(s[2]=='B'?x[1].first+=1:x[2].first+=1);
        }
        else{
            s[2]=='A'?x[0].first+=3:(s[2]=='B'?x[1].first+=3:x[2].first+=3);
            s[0]=='A'?x[0].first+=1:(s[0]=='B'?x[1].first+=1:x[2].first+=1);
        }
    }
    if(x[0].first==x[1].first||x[0].first==x[2].first||x[1].first==x[2].first)
        cout<<"Impossible";
    else{
        sort(x,x+3);
        for(int i=0;i<3;i++)
            cout<<x[i].second;
    }
    return 0;
}
