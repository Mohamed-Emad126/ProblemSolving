#include <iostream>
using namespace std;
int r,n,y,b,x[3009];
string s;
int main()
{
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='R'){
            b=1;
            for(int j=i;j<n;j++,b++){
                if(s[j]=='L')
                    break;
                x[j]+=b;
            }
        }
        if(s[i]=='L'){
            b=-1;
            for(int j=i;j>=0;j--,b--){
                if(s[j]=='R')
                    break;
                x[j]+=b;
            }
        }
    }
    for(int i=0;i<n;i++){
        //cout<<x[i]<<" ";
        x[i]==0?r++:' ';
    }
    cout<<r;
    return 0;
}
