#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=0,c=0;
    string x;
    cin>>x;
    for(int i=0;i<x.length();i++){
        if(x[i]=='a')
            a++;
        if(x[i]=='b')
            b++;
        if(x[i]=='c')
            c++;
    }
    if((c==a||c==b)&&is_sorted(x.begin(),x.end())&&a>0&&b>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
