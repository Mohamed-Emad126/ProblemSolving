#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long x,z=0;
    cin>>x;
    for(int msk=0;msk<log2(x)+1;msk++){
        if(x&(1<<msk)) z++;
    }
    cout<<z;
    return 0;
}
