#include <iostream>
using namespace std;
int main()
{
    int n,k=1;
    cin>>n;
    int x[n]={0};
    x[0]=1;
    for(int i=0;i<n;i+=2)
        x[i]=k++;
    k=0;
    for(int i=1;i<n;i+=2)
        x[i]=n-(k++);
    for(int i=0;i<n;i++)
        cout<<x[i]<<" ";
    return 0;
}
