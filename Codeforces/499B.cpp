#include <iostream>
using namespace std;
int n,m;
pair<string,string>x[3050];
string c[3050];
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
        cin>>x[i].first>>x[i].second;
    for(int i=0;i<n;i++)
        cin>>c[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(c[i]==x[j].first){
                if(x[j].first.length()<=x[j].second.length()){
                    c[i]=x[j].first;
                    break;}
                else{
                    c[i]=x[j].second;
                    break;}
                }
        }
    }
    for(int i=0;i<n;i++)
        cout<<c[i]<<" ";
    return 0;
}
