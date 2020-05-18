/**i submit this problem again for PST contest on A2OJ**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char word[150];
    int n,k=0;
    cin>>n;
    cin>>word;
    for(int i=0;i<n;i++)
        word[i]=toupper(word[i]);
    sort(word,word+n);
    for(int i=1;i<n;i++){
        if(word[i]==word[i-1])
            word[i-1]='0';
    }
    for(int i=0;i<n;i++)
        word[i]!='0'?k++:' ';
    k==26?cout<<"YES":cout<<"NO";
    return 0;
}
