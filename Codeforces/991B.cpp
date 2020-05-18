#include <bits/stdc++.h>
using namespace std;
int n,x[105],ans;
double avg , a;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
        avg+=x[i];}
    sort(x,x+n);
    if(avg/n>=4.5)
        return cout<<0 , 0;
    for(int i=0;i<n;i++){
        ans++;
        avg+=5;
        avg-=x[i];
        if(avg/n>=4.5)
            break;
    }
    cout<<ans;
    return 0;
}
