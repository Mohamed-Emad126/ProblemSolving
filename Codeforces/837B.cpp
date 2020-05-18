#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r=0,g=0,b=0;
    cin>>n>>m;
    char x;
    int rows[n]={0},col[m]={0},fl[n][m];;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>x;
            if(x=='R'){
                fl[i][j]=1;
                r++;}
            if(x=='G'){
                fl[i][j]=2;
                g++;}
            if(x=='B'){
                fl[i][j]=3;
                b++;}
        }
    }
    if((n%3!=0&&m%3!=0)||r==0||g==0||b==0) return cout<<"NO" , 0;
    for(int i=0;i<n;i++){
        if(*max_element(fl[i],fl[i]+m)==*min_element(fl[i],fl[i]+m))
            rows[i]=*max_element(fl[i],fl[i]+m);
        //cout<<rows[i]<<" ";
    }
   // cout<<endl;
    for(int i=0;i<m;i++){
            int mx=-1;
            int mn=10;
        for(int j=0;j<n;j++){
            mx=max(mx,fl[j][i]);
            mn=min(mn,fl[j][i]);
        }
        //cout<<mx<<" "<<mn<<endl;
        mn==mx?(col[i]=mn):' ';
    }
    /*for(int i=0;i<m;i++)
        cout<<col[i]<<" ";
    cout<<endl;*/
    bool ko=true,re=true;
    if(m%3==0){
        if(count(col,col+m,0)>0){
            ko=false;
        }
        int sm=m/3;
        for(int i=0;i<m;i+=sm){
            for(int j=i;j<i+sm-1&&j<m-1;j++){
                if(*max_element(col+i,col+i+sm)!=*min_element(col+i,col+i+sm)){
                    ko=false;
                    break;
                }
            }
        }
    }
    if(n%3==0){
        if(count(rows,rows+n,0)>0){
            re=false;
        }
        int sn=n/3;
        for(int i=0;i<n;i+=sn){
            if(*max_element(rows+i,rows+i+sn)!=*min_element(rows+i,rows+i+sn)){
                re=false;
                break;
            }
        }
    }
    if((ko&&m%3==0)||(re&&n%3==0))
     cout<<"YES";
     else
        cout<<"NO";
    return 0;
}
