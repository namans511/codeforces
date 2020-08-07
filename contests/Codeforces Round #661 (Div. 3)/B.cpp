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
		int a[n],b[n];
		int ma,mb;
		cin>>a[0];
		ma=a[0];
		for (int i = 1; i < n; ++i)
		{
			cin>>a[i];
			if(a[i]<ma) {
				ma=a[i];
			}
		}
		cin>>b[0];
		mb=b[0];
		for (int i = 1; i < n; ++i)
		{
			cin>>b[i];
			if(b[i]<mb) {
				mb=b[i];
			}

		}
		ll move=0;
		for (int i = 0; i < n; ++i)
		{
			int xa=a[i]-ma;
			int xb=b[i]-mb;
			move+=max(xa,xb);
		}
		cout<<move<<"\n";
	}
	return 0;
}