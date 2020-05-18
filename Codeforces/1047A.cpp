#include <bits/stdc++.h>
using namespace std;
long long a=1,b=1,n;
int main()
{
    cin>>n;
    if(n==3)
        return cout<<1<<" "<<1<<" "<<1<<endl , 0;
    n-=2;
    if(n%3==0){
        a++;
        n--;
    }
    if(n%3==0){
        b++;
        n--;
    }
    cout<<a<<" "<<b<<" "<<n;
    return 0;
}
