#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int x,check=0,k=0,first=0;
    cin>>x;
    int z=x;
    for(int i=1;i<17;i++){
        z++;
        x=abs(z);
        //cout<<x<<endl;
        while(x>0){
            check=x%10;
            //cout<<check<<endl;
            if(check==8||check==-8){
                cout<<i;
                return 0;
            }
            x/=10;
        }
    }
    return 0;
}
