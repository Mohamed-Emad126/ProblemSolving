#include <bits/stdc++.h>
using namespace std;
long long n,x[int(3e5)],sm,fs,mx,a,b;
deque<long long>dq;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
        dq.push_back(x[i]);
    }
    sm=accumulate(x,x+n,0);
    for(int i=0;i<n;i++){
        fs+=x[i];
        if(fs==(sm-fs))
            mx=max(mx,fs);
    }
    if(mx!=0){
        return cout<<mx,0;
    }
    a=dq.front();
    dq.pop_front();
    if(!dq.empty()){
        b=dq.back();
        dq.pop_back();
    }
    while(!dq.empty()){
        if(a<b){
            a+=dq.front();
            dq.pop_front();
        }
        else if(a>b){
            b+=dq.back();
            dq.pop_back();
        }
        else if(a==b){
            mx=max(mx,a);
            a+=dq.front();
            dq.pop_front();
        }
    }
    if(a==b){
        mx=max(mx,a);
    }
    cout<<mx;
    return 0;
}
