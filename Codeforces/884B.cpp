#include <iostream>
using namespace std;
int n,x,a,ans;
int main()
{
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>a;
        ans+=a;
    }
    n--;
    if(ans+n==x)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
