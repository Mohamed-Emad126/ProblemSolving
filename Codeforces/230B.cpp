#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long ca=0,n,k=0;
    cin>>n;
    long long x[n]={0};
    for(int i=0;i<n;i++){
        cin>>ca;
        long long int c=sqrt(ca);
        for(int j=2;j*j<=c;j++){
            if(c%j==0){
                k++;
                break;
        }
        }
        if(k==0&&ca!=1&&(c*c==ca))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        k=0;
    }
    return 0;
}
