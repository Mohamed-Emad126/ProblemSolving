#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,o=0,z=0;
    char x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        x=='1'?(o++):(z++);
    }
    cout<<abs(o-z);
    return 0;
}
