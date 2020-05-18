#include <bits/stdc++.h>
using namespace std;
int n,a;string s;char c='1';
map<string,int>mp;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(mp[s]==0){
            cout<<"OK"<<endl;
            mp[s]++;}
        else{
            cout<<s<<mp[s]<<endl;
            a=mp[s];
            mp[s]++;
            while(a){
                c=(a%10)-'0';
                s+=c;
                a/=10;
            }
            mp[s]++;
        }
    }
    return 0;
}
