#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
#endif 
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin>>n;
		string s;
		cin>>s;
		int c1=0,c2=0;
		int m=0;
		for (int i = 0; i < n; ++i)
		{
			if(c2>c1) {
				m++;
				c1++;
			}
			if(s[i]==')')
				c2++;
			else
				c1++;
		}
		cout<<m<<"\n";
	}
	return 0;
}