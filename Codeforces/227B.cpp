#include <iostream>
using namespace std;
long long n,m,x[(int)2e5],z[(int)2e5],a,ans1,ans2;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
        z[x[i]]=i+1;}
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>a;
        if(a==x[0]){
            ans1++;
            ans2+=n;}
        else if(a==x[n-1]){
            ans2++;
            ans1+=n;}
        else{
            ans1+=z[a];
            ans2+=n-z[a]+1;
        }
    }
    cout<<ans1<<" "<<ans2;
    return 0;
}
