#include <iostream>
using namespace std;
int a,b,c,n;
int main()
{
    cin>>a>>b>>c>>n;
    a-=c;
    b-=c;
    if(a+b+c>=n||a<0||b<0)
        cout<<-1;
    else
        cout<<n-(a+b+c);
    return 0;
}
