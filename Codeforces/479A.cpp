#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x[5];
    x[0]=a+b*c;
    x[1]=a*(b+c);
    x[2]=a*b*c;
    x[3]=(a+b)*c;
    x[4]=a+b+c;
    cout<<*max_element(x,x+5);
    return 0;
}
