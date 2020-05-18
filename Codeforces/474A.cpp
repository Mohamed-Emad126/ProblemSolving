#include <iostream>
using namespace std;
int main()
{
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    string word,keybord="qwertyuiopasdfghjkl;zxcvbnm,./";
    char dir;
    cin>>dir>>word;
    for(int i=0;i<word.length();i++){
        for(int j=0;j<keybord.length();j++){
            if(word[i]==keybord[j]){
               dir=='R'? word[i]=keybord[j-1]:word[i]=keybord[j+1];
               break;
            }
        }
    }
    cout<<word;
    return 0;
}
