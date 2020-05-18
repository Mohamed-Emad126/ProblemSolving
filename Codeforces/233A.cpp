#include <iostream>
using namespace std;
int main()
{
    int n,x[109]={0};
    cin>>n;
    if(n&1){
        cout<<-1<<endl;
        return 0;}
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(x[i]==0){
            x[i]=j+1;
            x[j]=i+1;
            break;}
        }
    }
    for(int i=0;i<n;i++){
        if(x[i]!=0)
            cout<<x[i]<<" ";
    }
    return 0;
}
