#include <iostream>
using namespace std;
int z[3][3],a,b,c,x,y;
int main()
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cin>>z[i][j];
    }
    a=z[0][1]+z[0][2];
    b=z[1][0]+z[1][2];
    c=z[2][0]+z[2][1];
    for(int i=1;i<2e5;i++){
        a+=i;
        x=a-b;
        y=a-c;
        if(x+b==a&&y+c==a&&a>0&&x>0&&y>0&&x+y+i==a){
            z[0][0]=i;
            z[1][1]=x;
            z[2][2]=y;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++)
                    cout<<z[i][j]<<" ";
                cout<<endl;
            }
            return 0;
        }
        a-=i;
    }
    for(int i=1;i<2e5;i++){
        b+=i;
        x=b-a;
        y=b-c;
        if(x+a==b&&y+c==b&&b>0&&x>0&&y>0&&x+y+i==b){
            z[0][0]=x;
            z[1][1]=i;
            z[2][2]=y;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++)
                    cout<<z[i][j]<<" ";
                cout<<endl;
            }
            return 0;
        }
        b-=i;
    }
    for(int i=1;i<2e5;i++){
        c+=i;
        x=c-b;
        y=c-a;
        if(x+b==c&&y+a==c&&c>0&&x>0&&y>0&&x+y+i==c){
            z[0][0]=y;
            z[1][1]=x;
            z[2][2]=i;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++)
                    cout<<z[i][j]<<" ";
                cout<<endl;
            }
            return 0;
        }
        c-=i;
    }
    return 0;
}
