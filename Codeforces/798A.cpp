#include <iostream>
using namespace std;
int main()
{
    string word;
    cin>>word;
    int z=word.length(),check=0;
    z & 1?z++:' ';
    for(int i=0;i<z/2;i++){
        //cout<<word[i]<<" "<<word[word.length()-i-1]<<endl;
        if(word[i]!=word[word.length()-i-1])
            check++;
    }
    if(check==1||check==0&&(word.length()&1))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
