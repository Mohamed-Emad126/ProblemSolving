#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int N,K;
    cin>>N>>K;
    long long v[K]={0},a=0,x[K]={0};
    for(int i=0;i<K;i++){
        cin>>a;
        x[i]=N%a;
        v[i]=N/a;
    }
    long long index=min_element(x,x+K)-x;
    cout<<index+1<<" "<<v[index];
    return 0;
}
