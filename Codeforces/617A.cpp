#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double n;
    cin>>n;
    if(n==1||n==2||n==3||n==4||n==5){
        cout<<1;
        return 0;
    }
    else{
        cout<<ceil(n/5);
    }
    return 0;
}
