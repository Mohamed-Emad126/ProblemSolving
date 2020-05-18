#include <iostream>
using namespace std;
int main()
{
    int n,k,temp,ans=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp<=5-k)
            ans++;
    }
    cout<<(int)ans/3;
    return 0;
}
