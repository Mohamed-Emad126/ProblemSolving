#include <bits/stdc++.h>
using namespace std;
string s,t;
int a,b,sl,tl,q,ans;
bool check=true;
vector<pair<int,int>>pos;
int main()
{
    cin>>sl>>tl>>q;
    cin>>s>>t;
    if(sl<tl){
        check=false;
    }
    for(int i=0;i<sl-tl+1;i++){
        if(!check) break;
        string x=s.substr(i,tl);
        //cout<<x<<endl;
        if(x==t){
            pos.push_back({i+1,i+tl});
            //i+=(tl-1);
        }
    }
    //for(auto c:pos){cout<<c.first<<" "<<c.second<<endl;}
    for(int i=0;i<q;i++){
        cin>>a>>b;
        if(!check)
            cout<<0<<endl;
        else{
            for(auto z:pos){
                if(a<=z.first&&b>=z.second)
                    ans++;
            }
            cout<<ans<<endl;
        }
        ans=0;
    }
    return 0;
}
