#include <bits/stdc++.h>
using namespace std;
string s; int a=-1,b,n;
char c='b';
int main()
{
    cin>>s;
    n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='a'){
            a=i+1;
            break;
        }
    }
    if(a==-1)
        return cout<<-1 , 0;
    for(int i=a;i<n;i++){
        if(s[i]<=c){
            s[i]=c;
            if(c=='z')
                return cout<<s , 0;
            c++;
        }
    }
    return cout<<-1 , 0;
    return 0;
}
