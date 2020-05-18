#include <iostream>
using namespace std;
int n,a,c,g,t,q;
string s,ans;
int main()
{
    cin>>n;
    cin>>s;
    if(n%4!=0) return cout<<"===" , 0;
    a=c=g=t=(n/4);
    for(int i=0;i<n;i++){
        if(s[i]=='A')
            a--;
        else if(s[i]=='C')
            c--;
        else if(s[i]=='G')
            g--;
        else if(s[i]=='T')
            t--;
        else
            q++;
        if(a<0||c<0||g<0||t<0)
            return cout<<"===" , 0;
    }
    if(q!=(a+t+c+g)){
        return cout<<"===" , 0;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='?'){
            if(a>0)
                s[i]='A',a--;
            else if(c>0)
                s[i]='C',c--;
            else if(g>0)
                s[i]='G',g--;
            else if(t>0)
                s[i]='T',t--;
            else
                return cout<<"===" , 0;
        }
    }
    cout<<s;
    return 0;
}
