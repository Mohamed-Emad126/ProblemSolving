#include <bits/stdc++.h>
using namespace std;
int n,a,b;
vector<int>ans;
int main()
{
    cin>>n>>a>>b;
    for(int i=1;i<n;i++){
        ans.push_back(min((a/i),b/(n-i)));
    }
    cout<<*max_element(ans.begin(),ans.end());
    return 0;
}
