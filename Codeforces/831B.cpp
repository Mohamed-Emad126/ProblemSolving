#include <bits/stdc++.h>
using namespace std;
int main()
{
    string wd,alp1,alp2;
    cin>>alp1;
    cin>>alp2;
    cin>>wd;
    for(int i=0;i<wd.length();i++){
        for(int j=0;j<26;j++){
            if(wd[i]==alp1[j]){
                wd[i]=alp2[j];
                break;}
            else if(tolower(wd[i])==alp1[j]){
                    wd[i]=toupper(alp2[j]);
                    break;
            }
        }
    }
    cout<<wd;
    return 0;
}
