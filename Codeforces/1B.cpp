#include <bits/stdc++.h>
using namespace std;
int n,t,f;
bool x[27];
char cr[1500],PR[1500];
string s;
int main()
{
    cin>>t;
    while(t--){
        int c=0,r=0;
        fill(PR,PR+1500,'.');
        cin>>cr;
        if(sscanf(cr,"R%dC%d",&r,&c)==2){
            string ro="";
            while(c>0){
                ro+=(char)(65+(c-1)%26);
                c=(c-1)/26;
            }
            reverse(ro.begin(),ro.end());
            cout<<ro<<r<<endl;
        }
        else{
            sscanf(cr,"%[A-Z]%d",PR,&r);
            int col=0;
            for(int i=0;PR[i+1]!='.';i++){
                col=26*col+PR[i]-64;
            }
            cout<<"R"<<r<<"C"<<col<<endl;
        }
    }
    return 0;
}
