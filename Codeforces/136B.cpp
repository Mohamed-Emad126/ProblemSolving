#include <bits/stdc++.h>
using namespace std;
long long a,c,n,ans;
string to_tor(long long x){
    string  s;
    while(x){
        s+=char('0'+x%3);
        x/=3;
    }
    return s;
}
int main()
{
    cin>>a>>c;
    string ator=to_tor(a);
    string ctor=to_tor(c);
    if(ator.length()>ctor.length()){
        n=ator.length()-ctor.length();
        for(int i=0;i<n;i++){
            ctor+='0';
        }
    }
    else{
        n=ctor.length()-ator.length();
        for(int i=0;i<n;i++){
            ator+='0';
        }
    }
    reverse(ator.begin(),ator.end());
    reverse(ctor.begin(),ctor.end());
    vector<char>v[50];
    string b="";
    for(int i=0;i<ator.length();i++){
        if(ator[i]=='1'&&ctor[i]=='1'){
            b+='0';
        }
        else if(ator[i]=='2'&&ctor[i]=='1'){
            b+='2';
        }
        else if(ator[i]=='1'&&ctor[i]=='2'){
            b+='1';
        }
        else if(ator[i]=='2'&&ctor[i]=='2'){
            b+='0';
        }
        else if(ator[i]=='0'&&ctor[i]=='0'){
            b+='0';
        }
        else if(ator[i]=='0'&&ctor[i]=='1'){
            b+='1';
        }
        else if(ator[i]=='1'&&ctor[i]=='0'){
            b+='2';
        }
        else if(ator[i]=='0'&&ctor[i]=='2'){
            b+='2';
        }
        else if(ator[i]=='2'&&ctor[i]=='0'){
            b+='1';
        }
    }
    reverse(b.begin(),b.end());
    //cout<<ator<<"\n"<<b<<"\n"<<ctor<<endl;
    for(int i=0;i<b.length();i++){
        if(b[i]!='0'){
            ans+=ceil(pow(3,i))*int(b[i]-'0');
        }
    }
    cout<<ans;
    return 0;
}
