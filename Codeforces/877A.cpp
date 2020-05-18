#include <bits/stdc++.h>
using namespace std;
int a,ab,ans;
string s,x[]={"Danil","Olya","Slava","Ann","Nikita"};
int main()
{
    cin>>s;
    for(int i=0;i<5;i++){
        a=s.find(x[i]);
        ab=s.rfind(x[i]);
        if(a==ab&&a<s.length()){
            ans++;
        }
        else if(a!=ab&&a<s.length()&&ab<s.length())
            ans+=50;
    }
    //cout<<s.find(x[0]);
    if(ans==0||ans>1)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
