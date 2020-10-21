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

ll f[21];

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
	
		f[0]=1;
		f[1]=1;
		for (int i = 2; i < 21; ++i) {
			f[i]= i * f[i-1];
		}
		ll n;
		cin>>n;
		ll ncr = f[n] / (f[n/2] * f[n/2]);
		ncr/=2;
		ll xx = f[n/2-1] * f[n/2-1];
		ll s = ncr*xx;
		cout<<s<<"\n";
	
	cerr<<getCurrentTime();
	return 0;
}