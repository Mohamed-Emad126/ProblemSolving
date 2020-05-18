#include <bits/stdc++.h>
using namespace std;
int n;
string s;
bitset<30>bt;
set<string>st;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<s.length();j++){
            bt[char(s[j]-'a')]=true;
        }
        string x="";
        for(int j=0;j<26;j++){
            if(bt[j]) x+=char(j+'a');
        }
        //cout<<x<<endl;
        st.insert(x);
        bt.reset();
        x="";
    }
    cout<<st.size();
    return 0;
}
