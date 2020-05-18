#include <iostream>
#include <cmath>
using namespace std;
long long int a,b,c,z=0,k=0,dig;
long long int remzeros(long long int x){
    k=0;
    z=0;
    while(x>0){
        dig=x%10;
        if(dig>0){
            z+=(dig*(pow(10,k++)));
            //cout<<z<<" "<<dig<<endl;
        }
        x/=10;
    }
    return z;
    }
int main()
{
    cin>>a>>b;
    c=a+b;
    a=remzeros(a);
    b=remzeros(b);
    c=remzeros(c);
    //cout<<a<<" "<<b<<" "<<c<<endl;
    if(a+b==c)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
