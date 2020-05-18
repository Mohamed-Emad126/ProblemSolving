#include <bits/stdc++.h>
using namespace std;
long long n,t1,f1,t2,f2,ans,a,b,h,k;
int main()
{
    cin>>n>>h>>a>>b>>k;
    for(int i=0;i<k;i++){
        cin>>t1>>f1>>t2>>f2;
        if(t1!=t2){if(f1>b){
            ans+=(f1-b);
            f1=b;
        }
        else if(f1<a){
            ans+=(a-f1);
            f1=a;
        }
        if(f2>b){
            ans+=(f2-b);
            f2=b;
        }
        else if(f2<a){
            ans+=(a-f2);
            f2=a;
        }
        ans+=abs(t1-t2);
        ans+=abs(f1-f2);}
        else{
            ans+=abs(f1-f2);
        }
        cout<<ans<<endl;
        ans=0;
    }
    return 0;
}
