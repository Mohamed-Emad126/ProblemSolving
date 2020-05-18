#include <bits/stdc++.h>
using namespace std;
long long x[14],a;
vector<long long>v,ans;
int main()
{
    for(int i=0;i<14;i++){
        cin>>x[i];
    }
    for(int i=0;i<14;i++){
            int z=x[i];
            //cout<<x[i]<<endl;
            x[i]=0;
        for(int j=0;j<14;j++){
            //cout<<ceil( double(z-j) / 14 )+x[(i+j+1)%14]<<" ";
            if( !(  int(ceil( double(z-j) / 14 )+x[(i+j+1)%14]) & 1 )){
                a+=ceil( double(z-j) / 14 )+x[(i+j+1)%14];
            }
        }
        //cout<<endl<<endl;
        x[i]=z;
        ans.push_back(a);
        a=0;
    }
    cout<<*max_element(ans.begin(),ans.end());
    return 0;
}
