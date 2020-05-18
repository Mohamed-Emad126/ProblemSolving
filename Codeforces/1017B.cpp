#include <iostream>
using namespace std;
unsigned long long n,o,ans,oz,zo,zz;
string a,b;
int main()
{
    cin>>n;
    cin>>a;
    cin>>b;
    for(int i=0;i<n;i++){
        a[i]!='0'?o++:(a[i]=='0'&&b[i]=='0'?zz++:' ');
        a[i]=='1'&&b[i]=='0'?oz++:(a[i]=='0'&&b[i]=='1'?zo++:' ');
    }
    for(int i=0;i<n;i++){
        a[i]=='0'&&b[i]=='0'?ans+=o:' ';
        a[i]=='0'&&b[i]=='1'?ans+=oz:' ';
    }
    cout<<ans;
    return 0;
}
