#include <bits/stdc++.h>
using namespace std;
long long n,sm=0,x;
int main()
{
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        scanf("%lld",&x);
        x&1?sm++:' ';
    }
    sm>0?printf("First"):printf("Second");
    return 0;
}
