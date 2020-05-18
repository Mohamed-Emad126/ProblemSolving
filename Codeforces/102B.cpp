#include <iostream>
using namespace std;
int main()
{
    string n;
    int k=0,x,z=0,ans=0,fsm=0;
    cin>>n;
    int v=n.length();
    v>1?(k++):' ';
    for(int i=0;i<v;i++){
        fsm+=(n[i]-48);
    }
    while(fsm>9){
        x=fsm;
        while(x>0){
            z=x%10;
            x/=10;
            ans+=z;
        }
        fsm=ans;
        k++;
        //cout<<fsm<<" "<<x<<endl;
        ans=0;x=0;z=0;
    }
    cout<<k;
    return 0;
}
