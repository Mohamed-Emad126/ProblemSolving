#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string pla;
    cin>>n;
    cin>>pla;
    int x=n;
    for(int i=0;i<x;i++){
        //cout<<pla[i]<<" "<<pla[i+1]<<endl;
        if((pla[i]=='R'&&pla[i+1]=='U')||(pla[i]=='U'&&pla[i+1]=='R')){
            n--;
            pla[i+1]='0';}
        //cout<<n<<endl;
    }
    cout<<n;
    return 0;
}
