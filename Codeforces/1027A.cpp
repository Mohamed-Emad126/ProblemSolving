#include <bits/stdc++.h>
using namespace std;
string s;
int q,n,check=0;
int main()
{
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>n>>s;
        for(int j=0;j<int(n/2);j++){
            if((char(s[j]+1)==char(s[n-j-1]+1) && char(s[j]+1)<='z'&&char(s[n-j-1]+1)<='z')||
                (char(s[j]+1)==char(s[n-j-1]-1) && char(s[j]+1)<='z'&&char(s[n-j-1]-1)>='a') ||
                (char(s[j]-1)==char(s[n-j-1]+1) && char(s[j]-1)>='a'&&char(s[n-j-1]+1)<='z') ||
                (char(s[j]-1)==char(s[n-j-1]-1) && char(s[j]-1)>='a'&&char(s[n-j-1]-1)>='a')){
                check++;
            }
        }
        if(check==int(n/2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        check=0;
    }
    return 0;
}
