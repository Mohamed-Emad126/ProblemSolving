#include <iostream>
using namespace std;
int main()
{
    int n,x[5009],z[5009]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        if(x[x[x[i]-1]-1]==i+1){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
