#include <bits/stdc++.h>
/*i will show you my stupidity*/
using namespace std;
bool lucky(long long int a,int dg){
    int f=0,s=0;
    for(int i=0;i<dg;i++){
        int z=a%10;
        z==7?s++:(z==4?f++:' ');
        a/=10;
    }
    if(s==f&&s==dg/2&&s!=0)
        return 1;
    return 0;
}
int main()
{
    long long int n,k=0,ans=0,a[70]={44447777,44474777,44477477,44477747,44477774,44744777,44747477,44747747,44747774,44774477,44774747,44774774,44777447,44777474,44777744,47444777,47447477,47447747,47447774,47474477,47474747,47474774,47477447,47477474,47477744,47744477,47744747,47744774,47747447,47747474,47747744,47774447,47774474,47774744,47777444,74444777,74447477,74447747,74447774,74474477,74474747,74474774,74477447,74477474,74477744,74744477,74744747,74744774,74747447,74747474,74747744,74774447,74774474,74774744,74777444,77444477,77444747,77444774,77447447,77447474,77447744,77474447,77474474,77474744,77477444,77744447,77744474,77744744,77747444,77774444};
    cin>>n;
    int dg=log10(n)+1;
    long long int x=pow(10,dg+1);
    if(dg==8&&n<=a[69]){
        cout<<*lower_bound(a,a+69,n);
        return 0;
    }
    if(dg==9||n>a[69]){
        cout<<4444477777;
        return 0;
    }
    else if(dg==7)
        cout<<44447777;
    else if(dg<7){
        int q=dg;
        for(int i=n;i<8*x;i++){
        if(log10(i)+1>dg){dg++;}
        if(dg>6&&i>777444){cout<<44447777;return 0;}
        if(i>7744&&q==4){cout<<444777;return 0;}
        if(lucky(i,dg)){
            ans=i;
            break;
        }
    }
    cout<<ans;}
    return 0;
}
