#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,s=0,mx,mn;
    cin>>n>>a>>b;
    char x[n];
    cin>>x;
    for(int i=0;i<n;i++){
        if(x[i]=='.'){
            if(a>b){
                if(x[i-1]!='0'&&a!=0){
                    a--;
                    x[i]='0';
                    s++;
                }
                else if(x[i-1]!='1'&&b!=0){
                    b--;
                    x[i]='1';
                    s++;
                }
            }
            else{
                if(x[i-1]!='1'&&b!=0){
                    b--;
                    x[i]='1';
                    s++;
                }
                else if(x[i-1]!='0'&&a!=0){
                    a--;
                    x[i]='0';
                    s++;
                }
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
