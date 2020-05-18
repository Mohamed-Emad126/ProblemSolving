#include <bits/stdc++.h>
using namespace std;
long long n,ft,sd,x;
vector<long long>f,s;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>0){
            ft+=x;
            f.push_back(x);}
        else{
            sd+=abs(x);
            s.push_back(abs(x));}
    }
    if(ft>sd||(ft==sd&&f>s)||(ft==sd&&s==f&&x>0)){
        cout<<"first";
    }
    else
        cout<<"second";
    return 0;
}
