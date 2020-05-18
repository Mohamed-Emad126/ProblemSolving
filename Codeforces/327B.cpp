#include <bits/stdc++.h>
using namespace std;
int n,NOO;
bool isPrime(int n){
    for(int x=2;x<=sqrt(n)+1;x++){
        if(n%x==0)
            return 0;
    }
    return 1;
}
int main()
{
    cin>>n;
    for(int i=2;i<int(10000000);i++){
        if(isPrime(i)){
            cout<<i<<" ";
            NOO++;
        }
        if(NOO==n)
            return 0;
    }
    return 0;
}
