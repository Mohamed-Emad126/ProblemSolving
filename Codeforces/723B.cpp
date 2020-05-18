#include <bits/stdc++.h>
using namespace std;
int x,ans,mx;
string s,a;
int main()
{
    cin>>x;
    cin>>s;
    for(int i=0;i<x;i++){
            //cout<<i<<endl;
        if(s[i]!='_'&&s[i]!='('){
            a+=s[i];
            if(s[i+1]=='_'||s[i+1]=='('||i==x-1){
                //cout<<a<<endl;
                mx=max(mx,int(a.length()));
                a.clear();}
        }
        else if(s[i]=='('){
                    int k=i+1;
                    while(s[k]!=')'){
                        if(s[k]!='_'){
                            a+=s[k];
                        if(s[k+1]=='_'||s[k+1]==')'){
                            //cout<<a<<endl;
                            ans++;
                            a.clear();}
                        }
                        k++;
                    }
                    i=k;
                    //cout<<k<<endl;
                }
    }
    cout<<mx<<" "<<ans;
    return 0;
}
