#include <bits/stdc++.h>
using namespace std;
int main()
{
    //fstream in("in.txt");
    //fstream out("out.txt");
    int m,a,x[int(3e5)];
    string s;
    cin>>s;
    cin>>m;
    const int z=s.length();
    for(int i=0;i<m;i++){
        cin>>a;
        x[a-1]++;
    }
    for(int i=1;i<z;i++) x[i]+=x[i-1];
    for(int i=0;i<z/2;i++){
        if(x[i]&1){
            swap(s[i],s[z-i-1]);
        }
    }
    cout<<s;
    return 0;
}
