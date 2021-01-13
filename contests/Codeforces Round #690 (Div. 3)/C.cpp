#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define vi std::vector<int>
#define vl std::vector<ll>
#define pi std::pair<int,int>
#define pl std::pair<ll,ll>
#define mi std::map<int, int> map;
#define ml std::map<ll, ll> map;
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fo(i, n) for(int i=0; i<n; i++)
#define Fo(i, k, n) for(int i=k; i<k; i++)
using namespace std;

clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

int main()
{
	startTime = clock();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
	freopen("error.txt", "w", stderr); 
#endif 
	int T;
	cin >> T;
	while(T--) {
		int x;
		cin>>x;
		if(x>45) {
			cout<<-1<<"\n";
			continue;
		}
		if(x<=9) {
			cout<<x<<"\n";
			continue;
		}
		vi v;
		ll a=9;
		while(x) {
			if(x>a) {
				v.pb(a);
				x-=a;
				a--;
			}
			else {
				v.pb(x);
				x=0;
			}
		}
		sort(v.begin(), v.end());
		for(auto i : v) {
			cout<<i;
		}
		cout<<"\n";
	}
	cerr<<getCurrentTime();
	return 0;
}