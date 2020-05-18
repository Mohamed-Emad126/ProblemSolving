#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,k=0;
    cin>>n;
    int h[n],g[n];
    for(int i=0;i<n;i++)
        cin>>h[i]>>g[i];
    for(int i=0;i<n;i++){
        k+=count(g,g+n,h[i]);
    }
    cout<<k;
    return 0;
}
