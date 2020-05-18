#include <iostream>
using namespace std;
int main()
{
    int n,k,check=0,ans=0;
    string num;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>num;
        for(int j=0;j<num.length();j++){
            if(num[j]=='4'||num[j]=='7')
                check++;
        }
        if(check<=k)
            ans++;
        check=0;
    }
    cout<<ans;
    return 0;
}
