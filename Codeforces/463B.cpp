#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,h=0,k=0;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    k=x[0];
    for(int i=0;i<n-1;i++){
        if(x[i]-x[i+1]+h>=0){
            h+=(x[i]-x[i+1]);}
        else{
            k+=abs(x[i]-x[i+1]+h);
        h=0;
        }
        //cout<<x[i]<<" "<<x[i+1]<<" "<<h<<" "<<k<<endl;
    }
    cout<<k;
    return 0;
}
