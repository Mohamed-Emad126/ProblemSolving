#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x1,x2,sum=0;
    cin>>x1>>x2;
    int x=abs(x1-x2);
    for(int i=1;i<=x/2;i++){
        sum+=i;
    }
    if(x%2==0){
        cout<<sum*2;
    }
    else{
        cout<<sum*2+(x/2+1);
    }
    return 0;
}
