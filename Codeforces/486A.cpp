#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n%2==0){
        cout<<((n/2)*-1)+n;
    }
    else{
        cout<<((n/2+1)*-1);
    }
    return 0;
}
