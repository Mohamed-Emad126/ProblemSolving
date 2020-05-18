#include <bits/stdc++.h>
using namespace std;
string s;
stack<char>stk;
int main()
{
    cin>>s;
    stk.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(!stk.empty()){
            if(stk.top()=='('&&s[i]==')')
                stk.pop();
            else
                stk.push(s[i]);
        }
        else
            stk.push(s[i]);
    }
    cout<<s.length()-stk.size();
    return 0;
}
