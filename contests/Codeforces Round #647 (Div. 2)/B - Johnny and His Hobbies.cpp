//#include <bits/stdc++.h>
#include "/Users/namansrivastava/Downloads/lol/stdc++.h"
#define ll long long
#define M 1000000007
#define pb push_back
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cout<<"hello lets start\n";
	cin>>n;
	cout<<"input taken";
	ll l1,l2,g1,g2;
	l1=l2=1;
	g1=g2=n;
	char ch1,ch2;
	ll m1,m2;
	m1=m2=(l1+g1)/2;
	cout<<m1<<endl;
	cin>>ch1;
	if(ch1=='E') return 0;
	cout<<m2<<endl;
	cin>>ch2;
	while(ch2!='E') {
	    if(ch1=='L') {
	        g1=m1-1;
	        m1=(l1+g1)/2;
	    }
	    else if(ch1=='G') {
	        l1=m1+1;
	        m1=(l1+g1)/2;
	    }
	    cout<<m1<<endl;
	    cin>>ch1;
	    if(ch1=='E') break;
	    if(ch2=='L') {
	        g2=m2-1;
	        m2=(l2+g2)/2;
	    }
	    else if(ch2=='G') {
	        l2=m2+1;
	        m2=(l2+g2)/2;
	    }
	    cout<<m2<<endl;
	    cin>>ch2;
	}
	return 0;
}