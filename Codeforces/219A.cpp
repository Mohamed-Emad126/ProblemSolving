#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word,coword;
    int k,z=0;
    cin>>k;
    int x[26]={0};
    cin>>word;
    for(int i=0;i<word.length();i++){
        x[word[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(x[i]%k!=0){
            cout<<-1;
            return 0;}
    }
    for(int i=0;i<26;i++){
        if(x[i]!=0){
            x[i]/=k;}
    }
    for(int i=0;i<26;i++){
        if(x[i]!=0){
            for(int j=0;j<x[i];j++){
                coword+='a'+i;
            }
            x[i]=0;}
    }
    if(k==1)
        cout<<word;
    else{
        for(int i=0;i<k;i++){
            cout<<coword;}
    }
    return 0;
}
