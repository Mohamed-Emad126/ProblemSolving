#include <iostream>
#include <algorithm>
using namespace std;
int shack,unshack,prob,n,x[10000];
int main()
{
    char names[500][500];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>names[i];
        cin>>shack>>unshack;
        for(int j=0;j<5;j++){
            cin>>prob;
            x[i]+=prob;
        }
        x[i]+=((shack*100)+(unshack*(-50)));
        //cout<<names[i]<<" "<<x[i]<<endl;
    }
    cout<<names[max_element(x,x+n)-x];
    return 0;
}
