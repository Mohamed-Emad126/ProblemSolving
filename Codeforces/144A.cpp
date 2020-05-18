#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,check=0,minind=0,maxind=0;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    int maxele=*max_element(x,x+n);
    for(int i=0;i<n;i++){
        if(x[i]==maxele){
            maxind=i;
            break;}
    }
    int minele=*min_element(x,x+n);
    for(int i=n-1;i>=0;--i){
        if(x[i]==minele){
            minind=i;
            break;}
    }
    //cout<<maxind<<" "<<minind;
    if(minind<maxind){
        minind++;
        }
    minind=n-minind-1;
    if(n==2&&minind==0&&maxind==1)
        cout<<1;
    else
        cout<<maxind+minind;
    return 0;
}
