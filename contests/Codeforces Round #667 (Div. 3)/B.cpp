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
		int a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;
		unsigned long long int sa,sb,ss;
		int ad= a-x;
		int bd= b-y;
		int g,l;
		if(a==b) {
			g=ad>bd?ad:bd;
			l=ad>bd?bd:ad;
			// deb2(g,l);
			if(g>=n) a-=n;
			else {
				a-=g;
				n-=g;
				int x = min(n,l);
				b-=x;
			}
			sa = a;
			sb = b;
			ss = sa*sb;
			cout<<ss<<"\n";
			continue;
		}
		g = (a>b)?a:b;
		l = (a>b)?b:a;
		int gx,lx;
		gx = (g==a)? ad : bd ;
		lx = (g==a)? bd : ad ;
		if(g-min(gx,n)<l-min(lx,n)) {
			swap(gx,lx);
			swap(g,l);
		}
		if(lx>=n) l-=n;
		else {
			l-=lx;
			n-=lx;
			g = (n>=gx)? g-gx : g-n;
		}
		// deb2(lx,gx);
		// deb2(l,g);
		sa = l;
		sb = g;
		ss = sa*sb;
		cout<<ss<<"\n";
	}
	cerr<<getCurrentTime();
	return 0;
}