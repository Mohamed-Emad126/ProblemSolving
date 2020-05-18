#include <iostream>
#include <algorithm>
using namespace std;
long long int n,a[(int)2e5]={0},x,sm=0;
int main()
{
    cin>>n>>x;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++){
        sm+=(a[i]*x);
        x--;
        x==0?x++:' ';
    }
    cout<<sm;
    return 0;
}
