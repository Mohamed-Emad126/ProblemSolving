#include <iostream>
using namespace std;
int main()
{
    int n,c,t,k=0,f=0,sm=0;
    cin>>n>>t>>c;
    int x[n],z[n]={0};
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        if(x[i]<=t){
            k++;
            if(i==n-1)
                z[f++]=k;
        }
        else {
            z[f++]=k;
            k=0;
        }
    }
    for(int i=0;i<n;i++){
        if((z[i]-c+1)>=0)
            sm+=(z[i]-c+1);
    }
    cout<<sm;
    return 0;
}
