#include <iostream>
using namespace std;
int main()
{
    int n,ven=0,sen,vir;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>vir;
        i==n-2?(sen=vir):' ';
        i==n-1?(ven=vir):' ';
    }
    if(ven==0)
        cout<<"UP"<<endl;
    else if(ven==15)
        cout<<"DOWN"<<endl;
    else if(sen-ven>0&&n>1)
        cout<<"DOWN"<<endl;
    else if(sen-ven<0&&n>1)
        cout<<"UP"<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
