#include <iostream>
using namespace std;
int o,cnt;
string s;
int main()
{
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            o=i;
            for(int i=o+1;i<s.length();i++){
                if(s[i]=='0')
                cnt++;
            }
            break;
        }
    }
    if(cnt>=6)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}
