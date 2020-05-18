#include <iostream>
using namespace std;
int x[105],n,k,mn=111,mx=-1;
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>x[i];
        mn=min(x[i],mn);
        mx=max(x[i],mx);
    }
    if(mx-mn>k)
        cout<<"NO";
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<x[i];j++){
                cout<<j%k+1<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
