#include <bits/stdc++.h>

//#include "/Users/namansrivastava/Downloads/lol/stdc++.h"
#define ll long long
#define M 1000000007
using namespace std;

ll mind(ll n) {
	ll min = n%10;
	n/=10;
	while(n>0) {
		if(n%10<min) {
			min=n%10;
		}
		n/=10;
	}
	return min;
}

ll maxd(ll n) {
	ll max = n%10;
	n/=10;
	while(n>0) {
		if(n%10>max) {
			max=n%10;
		}
		n/=10;
	}
	return max;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while(T--) {
		ll n,k;
		cin>>n>>k;
		ll a = n;
		for (int i = 0; i < k-1; ++i)
		{
			int m = mind(a);
			if(m==0) break;
			a = a + m*maxd(a);
		}
		cout<<a<<"\n";
	}
	return 0;
}