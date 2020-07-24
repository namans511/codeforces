#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
using namespace std;

int isD(ll n) {
	int d=0;
	while(n>0) {
		d+=n%10;;
		n/=10;
	}
	if(d%3) return 0;
	return 1;
}

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
		ll n;
		cin>>n;
		int f=0;
		int c=0;
		while(n==1) {
			if(isD(n)) {
				c++;
				if(n&1) 
					n*=2;
				else
					n/=6;
			}
			else {
				f=1;
				break;
			}
		}
		if(f==1) cout<<"-1\n";
		else cout<<c<<"\n";
	}
	return 0;
}