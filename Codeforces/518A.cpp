#include <iostream>
using namespace std;
int main()
{
    string x,y;
    cin>>x>>y;
    for(int i=x.length()-1;i>=0;--i){
        if(x[i]=='z')
            x[i]='a';
        else{
            x[i]++;
            break;
        }
        //cout<<x<<endl;
    }
    x<y?cout<<x:cout<<"No such string";
    return 0;
}
