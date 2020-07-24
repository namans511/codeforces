//#include<bits/stdc++.h> 
#include "/Users/namansrivastava/Downloads/lol/stdc++.h"
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;


int main()
 { 
	vector<pair<ll,ll> > tp;
	ll n;
	cin>>n;
	ll g,l,m;
	l=1;
	g=n;
	m=(g+l)/2;
	char ch,cx;
	cout<<m<<endl;
	cin>>ch;
	if(ch=='E') return 0;
	cout<<m<<endl;
	cin>>cx;
	if(ch==cx) {
		if(ch=='L') {
			g=m-1;
		}
		else if(ch=='G') {
			l=m+1;
		}
	}
	else {
		tp.pb(mp(m+1,g));
		tp.pb(mp(l,m-1));
	}

	while(ch!='E') {
		for (ll i = 0; i < tp.size(); ++i)
		{
			ll l_temp=tp[i].first;
			ll g_temp=tp[i].second;
			ll m=(l_temp+g_temp)/2;
			cout<<m<<endl;
			cin>>ch;
			if(ch=='E') return 0;
			cout<<m<<endl;
			cin>>cx;
			if(ch==cx) {
				tp.clear();
				if(ch=='L') {
					g=m-1;
				}
				else if(ch=='G') {
					l=m+1;
				}
			}
			else {
				tp.pb(mp(m+1,g_temp));
				tp.pb(mp(l_temp,m-1));
			}
		}
		tp.pb(mp(l,g));
	}
 } 