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
#define dee(x) cerr << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define dee2(x, y) cerr << #x << "=" << x << "," << #y << "=" << y << endl
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
		string s;
		cin>>s;
		int a[n];
		int p[n];
		int c=0;
		for (int i = 0; i < n; ++i) {
			a[i]=(int)s[i]-48;
			if(a[i]==1) c++;
			if(i==0) p[0]=a[0];
			else {
				p[i]=p[i-1]+a[i];
				if(p[i]==i+1) c++;
			}
		}
		// dee(T);
		for (int i = 1; i < n-1; ++i) {
			for (int j = i+1; j < n; ++j) {
				if(p[j]-p[j-i-1]==i+1)  {
					c++;
					// dee2(j,i);
				}
			}
		}
		cout<<c<<"\n";
		// for (int i = 0; i < n; ++i) {
		// 	cout<<a[i]<<" ";
		// }
		// cout<<endl;		
		// for (int i = 0; i < n; ++i) {
		// 	cout<<p[i]<<" ";
		// }
		// cout<<endl;
	}
	cerr<<getCurrentTime();
	return 0;
}