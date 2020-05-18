#include <bits/stdc++.h>
using namespace std;
int x,a,b,n,q,p,ng;
int main()
{
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    scanf("%d %d",&n,&q);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(x>0) p++;
        else ng++;
    }
    for(int i=0;i<q;i++){
        scanf("%d %d",&a,&b);
        if((b-a+1)&1)
            printf("0\n");
        else{
            if(p>=((b-a+1)/2)&&ng>=((b-a+1)/2))
                printf("1\n");
            else
                printf("0\n");
        }
    }
    return 0;
}
