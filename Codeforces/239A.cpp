#include <iostream>
using namespace std;
int main()
{
    long long int y,n,k,c=1;
    cin>>y>>k>>n;
    for(int i=k;i<=n;i+=k){
        if(i>y){
            c=0;
            cout<<i-y<<" ";
        }
    }
    if(c==1)
        cout<<-1;
    return 0;
}
