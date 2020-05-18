#include <iostream>
using namespace std;
int n,z,a,o1[10],o2[10],o3[10];
bool x[1000];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<6;j++){
            if(i==0) cin>>o1[j];
            if(i==1) cin>>o2[j];
            if(i==2) cin>>o3[j];
        }
    }
    for(int i=0;i<6;i++){
        x[o1[i]]=true;
        //cout<<o1[i]<<" ";
        if(n>1){
            for(int j=0;j<6;j++){
                //cout<<o2[j]<<" ";
                x[o2[j]]=true;
                x[(o1[i]*10)+o2[j]]=true;
                x[(o2[j]*10)+o1[i]]=true;
                if(n>2){
                    for(int k=0;k<6;k++){
                        //cout<<o3[k]<<endl;
                        x[o3[k]]=true;
                        x[(o3[k]*10)+o1[i]]=true;
                        x[(o3[k]*10)+o2[j]]=true;
                        x[(o1[i]*10)+o3[k]]=true;
                        x[(o2[j]*10)+o3[k]]=true;
                        int a=(o3[k]*100)+(o2[j]*10)+o1[i];
                        x[a]=true;
                        int b=(o1[i]*100)+(o2[j]*10)+o3[k];
                        x[b]=true;
                        int c=(o2[j]*100)+(o1[i]*10)+o3[k];
                        x[c]=true;
                        int d=(o3[j]*100)+(o1[i]*10)+o2[j];
                        x[d]=true;
                        int e=(o1[i]*100)+(o3[k]*10)+o2[j];
                        x[e]=true;
                        int f=(o2[j]*100)+(o3[k]*10)+o1[i];
                        x[f]=true;
                    }
                }
            }
        }
    }
    for(int i=1;i<1000;i++){
            //cout<<i<<" "<<x[i]<<endl;
        if(!x[i]){
            return cout<<(i?i-1:0), 0;
        }
    }
    return 0;
}
