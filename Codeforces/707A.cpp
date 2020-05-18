#include <iostream>
using namespace std;
int main()
{
    int n,m,w=0,c=0;
    char color;
    cin>>n>>m;
    for(int i=0;i<n*m;i++){
        cin>>color;
        color=='B'||color=='G'||color=='W'?(w++):(c++);
    }
    if(c==0&&w>0)
        cout<<"#Black&White";
    else
        cout<<"#Color";
    return 0;
}
