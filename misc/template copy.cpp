#include <bits/stdc++.h>
//#include "/Users/namansrivastava/Downloads/lol/stdc++.h"
#define ll long long
#define M 1000000007
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while(T--) {
		ll n;
		cin>>n;
		ll x=n*(n+1)/2;
		ll x1=x;
		for (int i = 1; i <= n; i*=2)
		{
			/* code */
			x-=i*2;
		}
		cout<<x<<"\n";
	}
	return 0;
}