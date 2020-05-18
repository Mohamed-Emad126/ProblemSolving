#include <bits/stdc++.h>
using namespace std;
int n,k,c;
vector<int>v;
bool prime(int a){
    for(int i=2;i*i<=a;i++){
        if(a%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    cin>>n>>k;
    for(int i=2;i<n;i++){
        if(prime(i))
            v.push_back(i);
    }
    for(int i=1;i<v.size();i++){
        //cout<<v[i]<<" "<<v[i-1]<<" "<<prime(v[i-1]+v[i]+1)<<endl;
        if((v[i]+v[i-1]+1)<=n&&prime(v[i]+v[i-1]+1))
            c++;
    }
    v.clear();
    if(c>=k)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
