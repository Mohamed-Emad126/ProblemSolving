#include <iostream>
using namespace std;
int main()
{
    long long int n,x;
    char sta,fin;
    cin>>sta>>fin;
    cin>>n;
    x=sta-fin;
    if(sta==fin||n%2==0)
        cout<<"undefined";
    else if((n%4==1&&(x==58||x==-34||x==32||x==-56))||(n%4==3&&(x==-58||x==34||x==-32||x==56))){
        cout<<"cw";
    }
    else
        cout<<"ccw";
    return 0;
}
