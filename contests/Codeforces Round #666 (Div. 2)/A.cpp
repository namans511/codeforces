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
		int n;
		cin>>n;
		string s[n];
		std::map<char, int> m;
		for (int i = 0; i < n; ++i) {
			cin>>s[i];
			for (int j = 0; j < s[i].length(); ++j) {
				m[s[i][j]]++;
			}
		}
		int f=0;
		for (auto i : m) {
			// deb2(i.F,i.S);
			int offset = i.S % n;
			if(offset) {
				f=1;
				break;
			}
		}
		if(f) cout<<"NO\n";
		else cout<<"YES\n";
	}
	cerr<<getCurrentTime();
	return 0;
}