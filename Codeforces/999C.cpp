#include <iostream>
using namespace std;
string s;
int n,k,x[28],a,b;
int main()
{
    cin>>n>>k;
    cin>>s;
    for(int i=0;i<n;i++){
        x[s[i]-'a']++;
    }
    for(int i=0;i<28;i++){
        for(int j=0;j<n;j++){
            if(s[j]==i+'a'){
                s[j]='.';
                k--;
                if(k==0) break;}
        }
        if(k==0) break;
    }
    for(int i=0;i<n;i++){
        if(s[i]!='.')
            cout<<s[i];
    }
    return 0;
}
