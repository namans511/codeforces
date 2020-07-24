#include <bits/stdc++.h>
//#include "/Users/namansrivastava/Downloads/lol/stdc++.h"
#define ll long long
#define M 1000000007
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while(T--) {
		int n,m;
		cin>>n>>m;
		int a[n][m];
		int b[n][m];
		int c=0;
		for (int i = 0; i < n; ++i)
		{
			for(int j = 0; j< m; j++) {
				cin>>a[i][j];
				b[i][j]=0;
			}
		}
		for (int i = 0; i < n; ++i)
		{
			for(int j = 0; j< m; j++) 
			{
				if(a[i][j]==1) 
				{
					for(int k=0;k<n;k++)
					{
						b[k][j]=2;
					}
					for(int l=0;l<m;l++) 
					{
						b[i][l]=2;
					}
				}
			}
		}
		
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
//				cout<<b[i][j]<<" ";
				if(b[i][j]==0) {
					c++;
					for(int k=0;k<n;k++) 
					{
						if(b[k][j]==0) b[k][j]=1;
					}
					for (int l = 0; l < m; ++l)
					{
						if(b[i][l]==0) b[i][l]=1;
					}
				}
			}
//			cout<<"\n";
		}
//		cout<<"c="<<c<<"\n";
		if(c%2==1) cout<<"Ashish\n";
		else cout<<"Vivek\n";
	}	
	return 0;
}