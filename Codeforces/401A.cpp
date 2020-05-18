#include <iostream>
#include <cmath>
using namespace std;
int n,x,vir,k;
int main()
{
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>vir;
        k+=vir;
    }
    k=abs(k);
    vir=k/x;
    if (k%x!=0)
        vir++;
    cout<<vir<<endl;
    return 0;
}
