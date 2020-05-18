#include <iostream>
using namespace std;
int main()
{
    int n,sum=0,check=0;
    cin>>n;
    int x[n]={0};
    for(int i=0;i<n;i++){
        cin>>x[i];
        sum+=x[i];
    }
    for(int i=0;i<n;i++){
        if(!((sum-x[i])&1))
            check++;
    }
    cout<<check;
    return 0;
}
