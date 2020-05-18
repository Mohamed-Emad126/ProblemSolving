#include <bits/stdc++.h>
using namespace std;
int x[105]={0},n=0,o=0,e=0,k=0,a=0;
vector<int>v;
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=0;i<n;i++){
        x[i]&1?e++:o++;
        if(e==o&&e!=0&&i!=n-1){
            v.push_back(abs(x[i]-x[i+1]));
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()&&!v.empty();i++){
        if(k-v[i]<0)
            break;
        else{
            k-=v[i];
            a++;}
    }
    cout<<a;
    return 0;
}
