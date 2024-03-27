#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
	int n, k; cin>>n>>k;
	vector<int> v(n);
	for(int i=0; i<n; i++)
	{
		cin>>v[i];
	}

	int mi = 6;
	if(k!=4)
	{
		for(int i=0; i<n; i++)
		{
			if(v[i]%k==0)
			{
				cout<<0<<endl;
				return;
			}
			mi = min(mi, k-v[i]%k);
		}
		cout<<mi<<endl;
	}
	else
	{
		for(int i=0; i<n; i++)
		{
			if(v[i]%k==0)
			{
				cout<<0<<endl;
				return;
			}
			mi = min(mi, k-v[i]%k);
		}
		
		int x = 0;
		for(int i=0; i<n; i++)
		{
			if(v[i]%2==0)
			{
				x++;
			}
			if(x==2)
			{
				break;
			}
		}

		if(x==2)
		{
			cout<<0<<endl;
		}
		else if(x==1)
		{
			cout<<1<<endl;
		}
		else
		{   
			if(mi<2)
			{
				cout<<mi<<endl;
			}
			else
			{
				cout<<2<<endl;
			}
		}
	}
}

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin>>t;
	while(t--)
	{
		solve();
	}
	
	return 0;
}

