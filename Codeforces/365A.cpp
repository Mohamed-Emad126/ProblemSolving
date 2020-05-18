#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans=0;
    cin>>n;
    string x;
    cin>>k;
    int z[k+1]={0};
    for(int i=0;i<n;i++){
        cin>>x;
        if(k==0){
            for(int j=0;j<x.length();j++){
                if(x[j]=='0'){
                    ans++;
                    break;
                }
            }
        }
        else{
        for(int j=0;j<x.length();j++){
            if((x[j]-48)<=k)
                z[x[j]-48]=1;
        }
        /*for(int j=0;j<k+1;j++)
            cout<<z[j]<<" ";
        cout<<endl;*/
        if(*max_element(z,z+k+1)==*min_element(z,z+k+1)&&*min_element(z,z+k+1)==1)
            ans++;
        fill(z,z+k+1,0);
        }
    }
    cout<<ans;
    return 0;
}
