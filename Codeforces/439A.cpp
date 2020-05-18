#include <iostream>
using namespace std;
int main()
{
    int n,d,k=0,x=0,s;
    cin>>n>>d;
    for(int i=0;i<n;i++){
        cin>>s;
        k++;
        x+=(s+10);
    }
    x-=10;
    if(x>d)
        cout<<-1;
    else{
        int z=(d-x)/5;
        cout<<(k-1)*2+z;}
    return 0;
}
