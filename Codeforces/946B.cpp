#include <iostream>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    while(1){
        if(a/b>=2)
            a=a%(2*b);
        if(a<=0)
            break;
        if(b/a>=2)
            b=b%(2*a);
        if(a<=0||b<=0||(a/b<2&&b/a<2))
            break;
    }
    cout<<a<<" "<<b;
    return 0;
}
