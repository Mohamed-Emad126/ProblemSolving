#include <bits/stdc++.h>
using namespace std;
long long int xf,yf,xe,ye,t,d[4]={0},wnd=0,snd=0,nnd=0,esnd=0,ck=0,vk=0;
string dir;
int main()
{
    cin>>t>>xf>>yf>>xe>>ye;
    cin>>dir;
    for(int i=0;i<t;i++){
        dir[i]=='N'?d[0]++:' ';
        dir[i]=='S'?d[1]++:' ';
        dir[i]=='E'?d[2]++:' ';
        dir[i]=='W'?d[3]++:' ';
    }
    int rxdir=xe-xf;
    int rydir=ye-yf;
    //cout<<rxdir<<" "<<rydir<<endl;
    if((rxdir<0&&d[3]<abs(rxdir))||(rxdir>0&&d[2]<abs(rxdir))){
        cout<<-1;
        return 0;
    }
    else if((rydir<0&&d[1]<abs(rydir))||(rydir>0&&d[0]<abs(rydir))){
        cout<<-1;
        return 0;
    }
    rxdir<0?wnd=abs(rxdir):esnd=abs(rxdir);
    rydir<0?snd=abs(rydir):nnd=abs(rydir);
    long long int ans1=max(wnd,esnd),ans2=max(snd,nnd);
    for(int i=0;i<t;i++){
        if(wnd!=0&&dir[i]=='W')
            ck++;
        else if(esnd!=0&&dir[i]=='E')
            ck++;
        if(snd!=0&&dir[i]=='S')
            vk++;
        else if(nnd!=0&&dir[i]=='N')
            vk++;
        if(vk>=ans2&&ck>=ans1){
            cout<<i+1;
            break;}
    }
    return 0;
}
