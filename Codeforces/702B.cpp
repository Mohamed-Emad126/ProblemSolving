#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    long long int n,coun=0,power[31];
    cin>>n;
    for(int i=0;i<31;i++){
        power[i]=pow(2,i);
    }
    int x[n],z[n]={0};
    for(int i=0;i<n;i++)
        cin>>x[i];
    sort(x,x+n);
    for(int i=0;i<n;i++){
        for(int j=0;j<31;j++){
            if(binary_search(x+i+1,x+n,power[j]-x[i])){
                    long long int vk=upper_bound(x+i+1,x+n,power[j]-x[i])-lower_bound(x+i+1,x+n,power[j]-x[i]);
                //cout<<x[i]<<" "<<power[j]-x[i]<<endl;
                coun=coun+(vk);
                }
        }
        }
        cout<<coun;
    return 0;
}
