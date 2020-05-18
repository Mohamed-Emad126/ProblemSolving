#include <bits/stdc++.h>
using namespace std;
string s,t,x,d;
int a,b,cs[300];
vector<int>chk;
int main()
{
    cin>>s>>t;
    d=s;
    for(int i=1;i<=300;i++)
        cs[i-1]=i;
    for(int i=0;i<t.length();i++){
        for(int j=0;j<s.length();j++){
            if(t[i]==d[j]){
                a++;
                d[j]='0';
                break;}
        }
        for(int k=b;k<s.length();k++){
            if(t[i]==s[k]){
                s.length()==t.length()?b=0:b=k;
                s[k]='0';
                chk.push_back(cs[k]);
                break;}
        }
    }
    //cout<<chk<<endl<<a<<endl;
    if(s.length()>t.length() && a==t.length()&&is_sorted(chk.begin(),chk.end())&&chk.size()==t.length()){
        cout<<"automaton";
        return 0;
    }
    else if(s.length()==t.length()&&a==t.length()){
        cout<<"array";
        return 0;}
    else if(s.length()>t.length()&&a==t.length()){
        cout<<"both";
    }
    else
        cout<<"need tree";
    return 0;
}
