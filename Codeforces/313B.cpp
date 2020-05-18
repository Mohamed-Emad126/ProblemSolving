#include <iostream>
using namespace std;
int main()
{
    string v;
    cin>>v;
    int m,z[v.length()]={0},a,b;
    for(int i=0;i<v.length()-1;i++){
        if(v[i]==v[i+1])
            z[i+1]=1;
    }
    for(int i=1;i<v.length();i++)
        z[i]+=z[i-1];
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        cout<<z[b-1]-z[a-1]<<endl;
    }
    return 0;
}
