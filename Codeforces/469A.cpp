#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,p;
    cin>>n;
    int check [n]={0};
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>x;
        check [x-1]=1;
    }
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>x;
        check [x-1]=1;
    }
    int v=*min_element(check,check+n);
    v==1?cout<<"I become the guy.":cout<<"Oh, my keyboard!";
    return 0;
}
