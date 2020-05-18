#include <bits/stdc++.h>
using namespace std;
long long n,x[100005],a;
map<int,int>mp,pos;
set<int>st;
int main()
{
    cin>>n>>a;
    for(int i=0;i<n;i++){
        cin>>x[i];
        mp[x[i]]++;
        pos[x[i]]=i;
    }
    if(mp.size()<n)
        return cout<<0 , 0;
    for(int i=0;i<n;i++){
        int num=a&x[i];
        //cout<<x[i]<<" "<<num<<endl;
        if(mp[num]==1&&pos[num]!=i)
            return cout<<1 , 0;
        else{
            st.insert(num);
        }
    }
    if(st.size()<n)
        return cout<<2 , 0;
    return cout<<-1,0;
    return 0;
}
