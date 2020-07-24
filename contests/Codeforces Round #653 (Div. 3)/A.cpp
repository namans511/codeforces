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
		int x,y,n;
		cin>>x>>y>>n;
		int m=n%x;
		if(m>y) {
			n=n-(m-y);
		}
		else if(m<y) {
			n-=m;
			n-=(x-y);
		}
		cout<<n<<"\n";
	}
	return 0;
}