#include <bits/stdc++.h>
using namespace std;
unsigned long long n,a,ans;
deque<unsigned long long>dq,sdq;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        dq.push_back(a);
        sdq.push_back(a);
    }
    sort(dq.begin(),dq.end());
    sort(sdq.begin(),sdq.end());
    for(int i=0;i<n&&!sdq.empty()&&!dq.empty();i++){
        if(dq.front()<sdq.front()){
            dq.pop_front();
            sdq.pop_front();
            ans++;
        }
        else{
            sdq.pop_front();
        }
    }
    cout<<ans;
    return 0;
}
