#include <iostream>
using namespace std;
int main()
{
    string s,t;
    int freq[130]={0},z=0,x=0;
    cin>>s>>t;
    for(int i=0;i<t.length();i++)
        freq[t[i]]++;
    for(int i=0;i<s.length();i++){
        if(freq[s[i]]>0){
            x++;
            freq[s[i]]--;
            s[i]='-1';
        }
    }
    for(int i=0;i<s.length();i++){
        if(s[i]!='-1'){
        char p=s[i];
        if(isupper(p))
            p=tolower(p);
        else
            p=toupper(p);
        //cout<<p<<" ";
        if(freq[p]>0){
            freq[p]--;
            z++;}}
        }
        //cout<<z<<endl;
    cout<<x<<" "<<z;
    return 0;
}
