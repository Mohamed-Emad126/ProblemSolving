#include <iostream>
using namespace std;
int main()
{
	int cur, n;
	char ch;
	cur = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i){
		cin >> ch;
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'u' || ch == 'o' || ch == 'y'){
			if (cur == 0)
				cout << ch;
			cur = 1;
			}
		else{
			cout << ch;
			cur = 0;
		}
	}
	return 0;
}
