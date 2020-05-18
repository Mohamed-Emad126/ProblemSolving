#include <bits/stdc++.h>
using namespace std;
long long o,q;
char alp[200];
string s;
char a,b;
int main()
{
    cin>>o>>q;
    cin>>s;
    for(int i=0;i<=26;i++){
        alp[i]=char('a'+i);
    }
    for(int i=0;i<q;i++){
        cin>>a>>b;
        for(int j=0;j<30;j++){
            if(alp[j]==a){
                alp[j]=b;
                continue;
            }
            if(alp[j]==b){
                alp[j]=a;
                continue;
            }
        }
        /*for(int j=0;j<30;j++)
            cout<<alp[j];
        cout<<endl;*/
    }
    for(int i=0;i<o;i++){
        for(int j=0;j<30;j++){
            if(s[i]==char('a'+j)){
                cout<<alp[j];
                break;
            }
        }
    }
    return 0;
}
