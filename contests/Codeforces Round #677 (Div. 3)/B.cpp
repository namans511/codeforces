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
		int s = 0;
		int n;
		cin>>n;
		int a[n];
		int f=1;
		int ff=0;
		int c=0;
		for (int i = 0; i < n; ++i) {
			cin>>a[i];
			if(a[i]) {
				ff=1;
				if(!f) {
					if(c) s+=c;
					c=0;
					f=1;
				} 
			}
			else {
				if(ff) c++;
				f=0;
			}
		}
		cout<<s<<"\n";

	}
	cerr<<getCurrentTime();
	return 0;
}