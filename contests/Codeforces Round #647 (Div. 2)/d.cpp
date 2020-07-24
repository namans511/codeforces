#include "/Users/namansrivastava/Downloads/lol/stdc++.h"
//#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
#define pb push_back
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin>>n;
	ll g,l,m,l1,g1,m1;
	l=l1=1;
	g=g1=n;
	m=m1=(g+l)/2;
	char ch,cx,ch1;
	cx='E';
	cout<<m<<endl;
	cin>>ch;
	ch1=ch;
	if(ch=='E') return 0;
	while(ch!=cx) {
		cx=ch;
		cout<<m<<endl;
		cin>>ch;
	}	
	while(true) {
		cx='E';
		if(ch=='L') {
			g=m-1;
			m=(g+l)/2;
		}
		else if(ch=='G') {
			l=m+1;
			m=(g+l)/2;
		}
		cout<<m<<endl;
		cin>>ch;
		if(ch=='E') break;
		while(ch!=cx) {
			cx=ch;
			cout<<m<<endl;
			cin>>ch;
		}
	}
	return 0;
}