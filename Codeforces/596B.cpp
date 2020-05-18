#include <iostream>
#include <cmath>
using namespace std;
long long n,sm,x[(int)10e6];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
        i==0?
        (sm+=abs(0-x[i])):
            sm+=abs(x[i]-x[i-1]);
    }
    cout<<sm;
    return 0;
}
