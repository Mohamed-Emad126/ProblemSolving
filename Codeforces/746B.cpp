#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string x,z;
    cin>>x;
    z=x[0];
    if(x.length()<=2){
        cout<<x;
        return 0;
    }
    for(int i=1;i<x.length();i++){
        if(x.length()&1){
            if((i&1))
                z.insert(z.begin(),x[i]);
            else
                z.push_back(x[i]);
        }
        else{
            if(!(i&1))
                z.insert(z.begin(),x[i]);
            else
                z.push_back(x[i]);}
    }
    cout<<z;
    return 0;
}
