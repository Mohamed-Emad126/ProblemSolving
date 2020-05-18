#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    int c=n/2;
    cout<<n<<" ";
    while(n>1){
        if(n%c==0){
            cout<<c<<" ";
            n=c;
            c--;
        }
        else
            c--;
    }
    return 0;
}
