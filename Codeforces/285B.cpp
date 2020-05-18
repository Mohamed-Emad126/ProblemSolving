#include <iostream>
using namespace std;
int n,s,t,a,oo=(int)3e5,ans;
int x[(int)2e5];
int main()
{
    cin>>n>>s>>t;
    for(int i=0;i<n;i++) cin>>x[i];
    a=x[s-1];
    if(s==t){
        cout<<0;
        return 0;}
    while(oo--){
        ans++;
        //cout<<a<<endl;
        if(a==t){
            cout<<ans;
            return 0;
        }
        a=x[a-1];
    }
    cout<<-1;
    return 0;
}
