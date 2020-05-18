#include <iostream>
using namespace std;
int n,m;
char x[105][105],z[105][105];
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>x[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<m;k++){
                if(x[i][j]==x[i][k]&&k!=j){
                    z[i][j]='.'; z[i][k]='.';}
            }
            for(int k=0;k<n;k++){
                if(x[i][j]==x[k][j]&&k!=i){
                    z[i][j]='.'; z[k][j]='.';}
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(z[i][j]!='.')
                z[i][j]=x[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(z[i][j]!='.') cout<<z[i][j];
        }
    }
    return 0;
}
