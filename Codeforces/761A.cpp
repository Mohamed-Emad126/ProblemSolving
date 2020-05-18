#include <iostream>
using namespace std;
int main()
{
    int a,b,ev,od;
    cin>>a>>b;
    if(((a+b)&1)){
        ev=(a+b)/2;
        od=(a+b)/2+1;
            }
    else{
        ev=(a+b)/2;
        od=(a+b)/2;
    }
    if(((ev==b&&od==a)||(ev==a&&od==b))&&(a+b>0))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
