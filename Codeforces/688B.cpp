#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string x,z;
    cin>>x;
    z=x;
    reverse(z.begin(),z.end());
    cout<<x<<z;
    return 0;
}
