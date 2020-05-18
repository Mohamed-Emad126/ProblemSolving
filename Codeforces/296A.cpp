#include <bits/stdc++.h>
using namespace std;
int x[1008]={0};
int main()
{
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        x[a-1]++;
    }
    if(*max_element(x,x+1008)>(n+1)/2)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
