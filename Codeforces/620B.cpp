#include <iostream>
using namespace std;
long long z[10]={6,2,5,5,4,5,6,3,7,6},a,b,dg;
int main()
{
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        int v=i;
        while(v){
            dg+=z[v%10];
            v/=10;
        }
    }
    cout<<dg;
    return 0;
}
