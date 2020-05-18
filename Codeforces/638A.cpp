#include <iostream>
using namespace std;
int a,n,ans;
int main()
{
    cin>>n>>a;
    if(a&1){
        for(int i=1;i<n;i+=2){
            ans++;
            if(i==a)
                return cout<<ans , 0;
        }
    }
    for(int i=n;i>=2;i-=2){
            ans++;
            if(i==a)
                return cout<<ans , 0;
        }
    return 0;
}
