#include <bits/stdc++.h>
using namespace std;
int n,m,a=0,b=0,u=0,hole=0,k;
int x[(int)10e6]={0};
int main()
{
    x[0]=1;
    scanf("%d %d %d",&n,&m,&k);
    for(int i=0;i<m;i++){
        scanf("%d",&a);
        if(x[a-1]==1){
            u++;
            hole=a;
        }
        else
            x[a-1]=-1;
    }
    for(int i=0;i<k;i++){
        scanf("%d %d",&a,&b);
        if((x[a-1]==0&&x[b-1]==1)||(x[a-1]==1&&x[b-1]==0)){
            swap(x[a-1],x[b-1]);
        }
        else if(u==0&&((x[a-1]==-1&&x[b-1]==1)||(x[a-1]==1&&x[b-1]==-1))){
            x[b-1]==-1?(hole=b):hole=a;
            u++;
        }
    }
    if(hole>0)
        printf("%d",hole);
    else
        printf("%d",max_element(x,x+n)-x+1);
    return 0;
}
/*2 1 1
1
1 2*/
