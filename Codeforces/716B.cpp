#include <iostream>
using namespace std;
string s,ans,alp="ABCDEFGHIJKLMNOPQRSTUVWXYZ",k;
int a,b,x[26],w;
int main()
{
    cin>>s;
    if(s.length()<26)
        return cout<<-1 , 0;
    for(int i=0;i<s.length();i++){
        ans=s.substr(i,26);
        //cout<<ans<<endl;
        if(ans.length()<26) break;
        for(int j=0;j<26;j++){
            if(ans[j]=='?') a++;
            else
                x[ans[j]-'A']++;
        }
        for(int j=0;j<26;j++){
            if(x[j]>0)
                b++;
            else
                k+=(j+'A');
        }
        //cout<<a<<" "<<b<<endl;
        if(a+b==26){
            for(int j=i;j<i+26;j++){
                if(s[j]=='?'){
                    s[j]=k.back();
                    k.pop_back();}
            }
            for(int j=i+26;j<s.length();j++){
                if(s[j]=='?') s[j]='A';
            }
            return cout<<s , 0;
        }
        else{
            for(int j=w;j<i;j++){
                if(s[j]=='?') s[j]='A';
            }
            w=i;
        }
        a=0;
        b=0;
        k.clear();
        fill(x,x+26,0);
    }
    cout<<-1;
    return 0;
}
