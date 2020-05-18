#include <iostream>
using namespace std;
long long a,b,mx=-1,n;
int main()
{
    cin>>n;
    while(n--){
        cin>>a>>b;
        mx=max(mx,a+b);
    }
    cout<<mx;
    return 0;
}
