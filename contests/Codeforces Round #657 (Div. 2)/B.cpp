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
		ll l,r,m;
		ll a,b,c;
		cin>>l>>r>>m;
		if(l==r) {
			cout<<l<<" "<<l<<" "<<l<<"\n";
			continue;
		}
		if(m&1) {
			b=l;
			c=b+1;
			m++;
		}
		else {
			b=c=l;
		}
		a=0;
		for(int i=(l&1)?l+1:l; i<=r; i+=2) {
			if(m%i==0) {
				a=i;
				break;
			}
		}
		cout<<a<<" "<<b<<" "<<c<<"\n";
	}
	return 0;
}