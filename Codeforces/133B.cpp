#include <bits/stdc++.h>
using namespace std;
string s,rs,nm[8]={"1000","1001","1010","1011","1100","1101","1110","1111"};
unsigned long long ans;
char ch[8]={'>','<','+','-','.',',','[',']'};
unsigned long long power(int n){
    unsigned long long x=1;
    for(int i=0;i<n;i++){
        x*=2;
        x%=1000003;
    }
    return x;
}
int main()
{
    cin>>s;
    for(int i=0;i<s.length();i++){
        for(int j=0;j<8;j++){
            if(s[i]==ch[j]){
                rs+=nm[j];
                break;
            }
        }
    }
    reverse(rs.begin(),rs.end());
    for(int i=0;i<rs.length();i++){
        if(rs[i]=='1'){
            ans+=(unsigned long long)power(i);
            ans%=1000003;
        }
    }
    cout<<ans;
    return 0;
}
