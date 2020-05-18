#include<iostream>
using namespace std;
int main(){
    int num,x=0;
    cin>>num;
    for(int i=9;i<=12000000;i++){
        int k=i,ans=0;
        while(k>0){
            ans+=k%10;
            k/=10;
        }
        if(ans==10)
            x++;
        if(x==num){
            cout<<i;
            return 0;
        }
    }
    return 0;
}
