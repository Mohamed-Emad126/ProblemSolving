#include <bits/stdc++.h>
using namespace std;
int x,mx;
string s;
vector<int>v;
bool isVowel(char c){
    string g="AEIOUY";
    for(int i=0;i<g.length();i++){
        if(c==g[i])
            return 1;
    }
    return 0;
}
int main()
{
    cin>>s;
    v.push_back(-1);
    for(int i=0;i<s.length();i++){
        if(isVowel(s[i])){
            v.push_back(i);
        }
    }
    if(v.size()==1)
        return cout<<s.length()+1 , 0;
    v.push_back(s.length());
    for(int i=1;i<v.size();i++){
        mx=max(mx,(v[i]-v[i-1]));
    }
    /*for(auto l:v)
        cout<<l<<" ";*/
    cout<<mx;
    return 0;
}
