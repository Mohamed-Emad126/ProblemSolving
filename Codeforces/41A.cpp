#include <bits/stdc++.h>
using namespace std;
int main()
{
    char word[150],coword[150];
    cin>>word>>coword;
    int x=strlen(word);
    reverse(coword,coword+x);
    //cout<<strcmp(word,coword);
    if(!strcmp(word,coword))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
