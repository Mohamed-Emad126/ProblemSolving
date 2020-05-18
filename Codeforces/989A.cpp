#include <iostream>
using namespace std;
string s;
int main()
{
    cin>>s;
    if(s.length()<3){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<s.length()-2;i++){
            //cout<<s[i]<<" "<<s[i+1]<<" "<<s[i+2]<<endl;
        if((s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='C')||(s[i]=='A'&&s[i+1]=='C'&&s[i+2]=='B')||(s[i]=='B'&&s[i+1]=='A'&&s[i+2]=='C')||(s[i]=='B'&&s[i+1]=='C'&&s[i+2]=='A')||(s[i]=='C'&&s[i+1]=='A'&&s[i+2]=='B')||(s[i]=='C'&&s[i+1]=='B'&&s[i+2]=='A')){
            cout<<"Yes"; return 0;
        }
    }
    cout<<"No";
    return 0;
}
