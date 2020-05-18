#include <iostream>
using namespace std;
string n;
int k;
void key_is_min(string n){
        for(int i=n.length()-2;i>=0;--i){
            int a=n[i];
            if(a%2==0){
                swap(n[i],n[n.length()-1]);
                cout<<n;
                break;
                }
        }
}
int main()
{
    cin>>n;
    string x=n;
    int key=n[n.length()-1];
    for(int i=0;i<n.length();i++){
        int a=n[i];
        if(a%2==0)
            k++;
    }
    if(!k){
        cout<<-1;
        return 0;
    }
    if(key!=1){
        for(int i=0;i<n.length();i++){
            int a=n[i];
            if(a%2==0&&n[i]<key){
                swap(n[i],n[n.length()-1]);
                cout<<n;
                return 0;
            }
        }
        key_is_min(n);
    }
    else{
        key_is_min(n);
    }
    return 0;
}
