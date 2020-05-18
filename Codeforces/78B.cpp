#include <iostream>
using namespace std;
int main()
{
    int n;
    string x="ROY";
    string y="GBIV";
    while(cin>>n){
    for(int i=0;i<n/2;i++){
        x+=y;
    }
    for(int i=0;i<n;i++)
        cout<<x[i];}
    return 0;
}
