#include <iostream>
using namespace std;
int a,b,c,mn=1000000000;
int main()
{
    cin>>a>>b>>c;
    for(int i=0;i<101;i++){
        mn=min(mn,(abs(i-c)+abs(i-a)+abs(i-b)));
    }
    cout<<mn;
    return 0;
}
