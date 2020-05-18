#include <bits/stdc++.h>
using namespace std;
int n,a,b,x;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        while(a<=x){
            a+=b;
        }
        x=a;
    }
    cout<<x;
    return 0;
}
