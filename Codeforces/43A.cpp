#include <iostream>
using namespace std;
int main()
{
    int n,ftg=0,stg=0;
    string fteam,steam,s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(i==0)
            fteam=s;
        if(fteam==s)
            ftg++;
        else{
            stg++;
            steam=s;}
    }
    ftg>stg?cout<<fteam<<endl:cout<<steam<<endl;
    return 0;
}
