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
		int x=ceil(n/4.0);
		for (int i = 0; i < n-x; ++i)
		{
			cout<<9;
		}
		for (int i = 0; i < x; ++i)
		{
			cout<<8;
		}
		cout<<"\n";
	}
	return 0;
}