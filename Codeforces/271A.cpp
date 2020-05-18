#include <bits/stdc++.h>
using namespace std;
int s,x[10],a,cnt;
int main()
{
    cin>>s;
    for(int i=s+1;i<10000;i++){
        a=i;
        while(a){
            int k=a%10;
            x[k]++;
            a/=10;
        }
        for(int j=0;j<10;j++){
            x[j]?cnt++:' ';
        }
        if(cnt==4)
            return cout<<i , 0;
        cnt=0;
        memset(x,0,sizeof(x));
    }
    return 0;
}
