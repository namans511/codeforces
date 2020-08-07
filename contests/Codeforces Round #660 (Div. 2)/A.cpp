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
		int s=6+10+14;
		int x=n-s;
		if(n<=s) {
			cout<<"NO\n";
		}
		else if(x==6) {
			cout<<"YES\n";
			cout<<5<<" "<<10<<" "<<15<<" "<<x<<"\n";
		}
		else if(x==14) {
			cout<<"YES\n";
			cout<<5<<" "<<10<<" "<<15<<" "<<x<<"\n";
		}
		else if(x==10) {
			cout<<"YES\n";
			cout<<6<<" "<<15<<" "<<14<<" "<<5<<"\n";
		}
		else {
			cout<<"YES\n";
			cout<<6<<" "<<10<<" "<<14<<" "<<x<<"\n";
		}
	}
	return 0;
}