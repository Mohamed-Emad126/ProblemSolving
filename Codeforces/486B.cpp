#include <iostream>
using namespace std;
int n,m,x[105][105],ro[105],col[105],ans[105][105],ck,k,cx[105][105];
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>x[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ck+=x[i][j];
            if(j==m-1&&ck==m)
                ro[i]=1;
        }
        ck=0;
    }
    ck=0;
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            ck+=x[i][j];
            if(i==n-1&&ck==n)
                col[j]=1;
        }
        ck=0;
    }
    /*for(int i=0;i<n;i++)
        cout<<ro[i]<<" "; cout<<endl;
    for(int i=0;i<m;i++)
        cout<<col[i]<<" "; cout<<endl;*/
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ro[i]==1&&col[j]==1)
                ans[i][j]=1;
        }
    }
    fill(ro,ro+n,0);
    fill(col,col+m,0);
    ///////////////
    ck=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ck+=ans[i][j];
            if(j==m-1&&ck>0)
                ro[i]=1;
        }
        ck=0;
    }
    ck=0;
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            ck+=ans[i][j];
            if(i==n-1&&ck>0)
                col[j]=1;
        }
        ck=0;
    }///
    /*for(int i=0;i<n;i++)
        cout<<ro[i]<<" "; cout<<endl;
    for(int i=0;i<m;i++)
        cout<<col[i]<<" "; cout<<endl;*/
    ///
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ro[i]==1||col[j]==1)
                cx[i][j]=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(cx[i][j]==x[i][j])
                k++;
        }
    }
    ///////////////
    if(k<n*m){
        cout<<"NO"; return 0;
    }
    else
        cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
