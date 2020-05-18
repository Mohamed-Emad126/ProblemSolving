#include <bits/stdc++.h>
using namespace std;
long long n,sm,sc,ans;
int main()
{
    cin>>n;
    /*for(int i=1;i<1900;i++){
        if(i>=1000) sm+=4;
        else if(i>=100) sm+=3;
        else if(i>=10) sm+=2;
        else sm++;
        cout<<i<<" "<<sm<<endl;;
    }*/
    string s=to_string(n);
    int v=s.length();
    s[0]--;
    sc=stoi(s)+1;
    //cout<<sc<<"---"<<v<<endl;
    ans+=(sc*v);
    for(int i=0;i<v-1;i++){
        //cout<<pow(10,i)*9<<"---"<<i<<endl;
        ans+=(pow(10,i)*9)*(i+1);
    }
    cout<<ans;
    return 0;
}
