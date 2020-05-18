#include <bits/stdc++.h>
using namespace std;
int t,q,n,a,b,pra,prb,sec;
int main()
{
    cin>>t;
    for(int q=0;q<t;q++){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(i){
                if(a>sec){
                    cout<<a<<" ";
                    sec=a;
                }
                else if((b>sec)){
                    cout<<++sec<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            else{
                cout<<a<<" ";
                sec=a;
            }
        }
        cout<<endl;
        sec=0;
    }
    return 0;
}
