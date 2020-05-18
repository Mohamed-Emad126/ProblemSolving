#include <bits/stdc++.h>
using namespace std;
int n,m,k,t,x[1002][2],a,b;
bool waste;
int main()
{
    int z[33][33]={0};
    string s[]={"Grapes","Carrots","Kiwis"};
    cin>>n>>m>>k>>t;
    for(int i=0;i<k;i++){
        cin>>x[i][0]>>x[i][1];
        z[x[i][0]-1][x[i][1]-1]=-1;
    }
    for(int i=0;i<t;i++){
        cin>>a>>b;
        z[a-1][b-1]=11;
        for(int j=0;j<k;j++){
            if(a==x[j][0]&&b==x[j][1]){
                waste=true; break;}
        }
        if(waste==true){
            cout<<"Waste"<<endl;
            waste=false;}
        else{
                int nm=0;
            for(int j=0;j<k;j++){
                if(a>x[j][0]){
                    //cout<<x[j][0]<<" "<<x[j][1]<<endl;
                    nm++;
                }
                else if(a==x[j][0]&&b>x[j][1]){
                    nm++;
                    //cout<<x[j][0]<<" "<<x[j][1]<<endl;
                }
            }
            a--;
            //b--;
            int ans=(a*m)+b;
            //cout<<ans<<" "<<nm<<endl;
            cout<<s[(ans-nm)%3]<<endl;
        }
    }
    /*for(int i=0;i<33;i++){
        for(int j=0;j<33;j++)
            cout<<z[i][j]<<" ";
        cout<<endl;
    }*/
    return 0;
}
