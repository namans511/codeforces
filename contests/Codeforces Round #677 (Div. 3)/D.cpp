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
#define mi std::map<int, int>
#define ml std::map<ll, ll>
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
		int n;
		cin>>n;
		ll a[n];
		ml m;
		for (int i = 0; i < n; ++i) {
			cin>>a[i];
			m[a[i]]++;
		}
		if(m.size() ==1) {
			cout<<"NO"<<"\n";
			continue;
		}
		cout<<"YES"<<"\n";
		int x;
		if(a[0]!=a[1]) {
			cout<<1<<" "<<2<<"\n";
			x=0;
			for (int i = 1; i < n-1; ++i) {
				if(a[i] != a[i+1]) {
					cout<<i+1<<" "<<i+2<<"\n";
					x=i;
				}
				else {
					cout<<x+1<<" "<<i+2<<"\n";
				}
			}
		}
		else {
			int xx;
			for (int i = 2; i < n; ++i) {
				if(a[i]!=a[0]) {
					xx=i;
					for (int j = 0; j < xx; ++j) {
						cout<<j+1<<" "<<xx+1<<"\n";
					}
					x=0;
					break;
				}
			}
			for (int i = xx; i < n-1; ++i) {
				if(a[i] != a[i+1]) {
					cout<<i+1<<" "<<i+2<<"\n";
					x=i;
				}
				else {
					cout<<x+1<<" "<<i+2<<"\n";
				}
			}
		}
	}
	cerr<<getCurrentTime();
	return 0;
}