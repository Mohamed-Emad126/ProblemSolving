#include <bits/stdc++.h>
using namespace std;
long long b,A,B,a;
int main()
{
    cin>>A>>B;
    a=min(A,B);
    b=max(A,B);
    A=1;
    for(int i=1;i<=a;i++){
        A*=i;
    }
    cout<<A;
    return 0;
}
