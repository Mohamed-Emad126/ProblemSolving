#include <iostream>
using namespace std;
int x[29],z;
string s;
int main()
{
    cin>>s;
    for(int i=0;i<s.length();i++)
        x[s[i]-97]++;
    for(int i=0;i<27;i++)
        x[i]&1?z++:' ';
    if(z&1||z==0)
        cout<<"First";
    else
        cout<<"Second";
    return 0;
}
